/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include "/home/sakura/ysyx-workbench/nemu/src/monitor/sdb/sdb.h"
#include <elf.h>
//#include "/home/sakura/ysyx-workbench/nemu/src/isa/riscv32/reg.c"

extern const char *regs[];
extern int is_exit_status_bad();
/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 1000

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();

//扫描所有的监视点
static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));

//监视点检查开关
#ifdef CONFIG_WATCHPOINT///////////////////////////////////////////////////////////////////////////
  if (diffest_wp()){
  	nemu_state.state = NEMU_STOP;
  	}
#endif

}

char iringbuf[20][128];
static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  
  
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

#ifndef CONFIG_ISA_loongarch32r
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#else
  p[0] = '\0'; // the upstream llvm does not support loongarch32r
#endif
#endif//////////////////////////////////////////////////////////////////////////////////////////////////



//监视点开关
#ifdef CONFIG_WATCHPOINT

step_wp();
#endif

}

static void iring_load(char (*a)[128],Decode *b,int cout_pc_num){
	char (*p)[128]=a;
	char *s=b->logbuf;
  strcpy(*(p+(cout_pc_num%10)),s);
}


extern Elf32_Ehdr *ehdr_globle;
extern Elf32_Shdr *shdr_globle;
extern Elf32_Sym  *sym_globle;
extern char **str_globle;

typedef struct{
		char *func_name;
		int start;
		int end;	
}Addr_Imfo;
Addr_Imfo* read_sym_func(Elf32_Shdr *shdr, Elf32_Sym *sym, char **strtab) {
    int sym_num = shdr->sh_size / sizeof(Elf32_Sym);

    int cnt = 0;
    for (int i = 0; i < sym_num; i++) {
        if (ELF32_ST_TYPE(sym[i].st_info) == STT_FUNC) {
            cnt++;
        }
    }

    Addr_Imfo *func_addr = malloc(cnt * sizeof(Addr_Imfo));
    if (!func_addr) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    cnt = 0;
    for (int i = 0; i < sym_num; i++) {
        if (ELF32_ST_TYPE(sym[i].st_info) == STT_FUNC) {
            func_addr[cnt].func_name = strdup(strtab[sym[i].st_name]);
            if (!func_addr[cnt].func_name) {
                fprintf(stderr, "Memory allocation failed\n");
                exit(EXIT_FAILURE);
            }
            func_addr[cnt].start = sym[i].st_value;
            func_addr[cnt].end = sym[i].st_value + sym[i].st_size;
            cnt++;
        }
    }

    return func_addr;
}

static void ftrace(Addr_Imfo *func_addr, Decode *s) {
    static Addr_Imfo addr[200];
    memset(addr, 0, sizeof(addr));
    static int rsp = 0;

    assert(rsp < 200 && "Stack Overflow !!!!!!!");

    if (addr[rsp].end < s->dnpc || addr[rsp].start > s->dnpc) {
        if (s->dnpc >= addr[rsp - 1].start && s->dnpc <= addr[rsp - 1].end) {
            rsp--;
            log_write("0x%08x ret %s\n", s->pc, addr[rsp].func_name);
            return;
        } else {
            for (int i = 0; func_addr[i].func_name != NULL; i++) {
							  printf("this is func_name :%s\n",func_addr[i].func_name);
                if (s->dnpc <= func_addr[i].end && s->dnpc >= func_addr[i].start) {
                    rsp++;
                    addr[rsp] = func_addr[i];
                    log_write("0x%08x: call [%s @ 0x%08x]\n", s->pc, addr[rsp].func_name, s->dnpc);
                    return;
                }
            }
            printf("\n\n\nUsing undefined function\n\n\n");
        }
    }
}
static void execute(uint64_t n) {
  Decode s;
	char iringbuf[20][128];
	char iringbuf_reg_state[2][512];
	int cout_pc_num=0;
  	
Addr_Imfo *func_addr = read_sym_func(shdr_globle,sym_globle,str_globle);
ftrace(func_addr,&s);

  for (;n > 0; n --) {
	char buf[512]={0};
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);




		for (int i=0;i<32;i++){//storage reg information
		char buf_temp[16]={0};
		sprintf(buf_temp,"%s : %08x\n",regs[i],(int)cpu.gpr[i]);	
		strcat(buf,buf_temp);
	}
		strcpy(*(iringbuf_reg_state+cout_pc_num%2),buf);//use iringbuf storage the reg information
	  iring_load(iringbuf,&s,cout_pc_num++);//storage the information of instructions		


		if (is_exit_status_bad()&& nemu_state.state!=NEMU_RUNNING){
			 cout_pc_num-=1;
	for(int i=0;i<=cout_pc_num%20;i++){
	if(i==cout_pc_num){

 log_write("\n\n\n\nthe reg information : \n%s\n",*(iringbuf_reg_state+((cout_pc_num-1)%2)));
 log_write("//////////////////////////////////////the wrong ///////////////////////////////////\n"); 		
	}	
 log_write("%s\n", *(iringbuf+i)); 
	if(i==cout_pc_num){
 log_write("//////////////////////////////////////the wrong ///////////////////////////////////\n"); 		
 log_write("%s\n",*(iringbuf_reg_state+(cout_pc_num%2)));
	}	
	}	
		}
		


    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency"); 
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: 
    case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);
  if (n == 0){
  	nemu_state.state = NEMU_QUIT;
  	}

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
			//log_write()
      // fall through
    case NEMU_QUIT: 
			statistic();
			nemu_state.state=NEMU_END;
      break;
  }
}
