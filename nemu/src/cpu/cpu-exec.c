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

#ifdef CONFIG_ITRACE
static void iring_load(char (*a)[128],Decode *b,int cout_pc_num){
	char (*p)[128]=a;
	char *s=b->logbuf;
  strcpy(*(p+(cout_pc_num%10)),s);
}
#endif

#ifdef CONFIG_FTRACE
Elf32_Ehdr* parse_elf(char *elf_file);
Elf32_Shdr *parse_shdr(Elf32_Ehdr *ehdr, char *elf_file);
char *parse_strtab(Elf32_Shdr *shdr,char *elf_file);
Elf32_Sym* parse_sym(Elf32_Shdr *shdr,char *elf);
extern int cnt_globle;         //real num of sym(the num of str_char)
extern char *elf_file;
extern int sym_globle_indx;

typedef struct{
		char *func_name;
		int start;
		int end;	
}Addr_Imfo;

int cnt_func_num;  //the num of funcs
Addr_Imfo *read_sym_func(){//all func info in func_addr
	Elf32_Ehdr *ehdr_globle;
	ehdr_globle=parse_elf(elf_file);
	Elf32_Shdr *shdr=parse_shdr(ehdr_globle,elf_file);
	char *strtab =parse_strtab(shdr,elf_file);
	Elf32_Sym* sym =parse_sym(shdr,elf_file);
					size_t sym_size = shdr[sym_globle_indx].sh_size;
					int sym_num  = sym_size/sizeof(Elf32_Sym);
					cnt_func_num=0;

					for(int i=0;i<sym_num;i++){
					if(ELF32_ST_TYPE(sym[i].st_info)==STT_FUNC)cnt_func_num++;
					}
					printf("There are %d functions\n",cnt_func_num);

					static Addr_Imfo *func_addr;
					func_addr=malloc(cnt_func_num*sizeof(Addr_Imfo));


					cnt_func_num=0;
					for(int i=0;i<sym_num;i++){
					if(ELF32_ST_TYPE(sym[i].st_info)==STT_FUNC){
					char *temp_func_name=strtab+sym[i].st_name;
					func_addr[cnt_func_num].func_name=temp_func_name;
					func_addr[cnt_func_num].start=sym[i].st_value;
					func_addr[cnt_func_num].end=sym[i].st_value+sym[i].st_size;
					cnt_func_num++;	
					}
					}

					//sort
					for(int i=0;i<cnt_func_num-1;i++){
						for(int j=i+1;j<cnt_func_num;j++){
							if(func_addr[i].start>func_addr[j].start){
							Addr_Imfo temp;
							temp.start=func_addr[i].start;
							temp.end=func_addr[i].end;
							temp.func_name=func_addr[i].func_name;
							
							func_addr[i].start=func_addr[j].start;
							func_addr[i].end=func_addr[j].end;
							func_addr[i].func_name=func_addr[j].func_name;

							func_addr[j].start=temp.start;
							func_addr[j].end=temp.end;
							func_addr[j].func_name=temp.func_name;
							}
						}
					}

					//start
					func_addr[0].end=func_addr[1].start;

					free(shdr);
					free(sym);
					//free(strtab);


					return func_addr;

}

	 /*
static void ftrace(Addr_Imfo *func_addr,Decode *s){
	
static Addr_Imfo addr[2000];
//memset(addr, 0x00, sizeof(addr));
static int rsp=0;
Assert(rsp<2000,"\n\n\n\n\n\n\nStack Overflow !!!!!!!\n\n\n\n\n\n");	
//printf("ALL IS OK\n");  


//printf("the first pc : %08x\n",s->pc);
//printf("the first dnpc : %08x\n",s->dnpc);

if(s->pc==0x80000000){
		for(int i=0;i<cnt_func_num;i++){
	  //printf("cnt_func_num=%d\n",cnt_func_num);
		if(func_addr[i].start<=s->pc&&func_addr[i].end>=s->pc){
		addr[rsp].func_name=func_addr[i].func_name;	
		addr[rsp].start=func_addr[i].start;
		addr[rsp].end=func_addr[i].end;
		printf("init is OK\n");
		}	
		}
	}//init
//if(s->pc>=func.addr[1].start){	
if (addr[rsp].end <= s->dnpc || addr[rsp].start >s->dnpc ){

		if(rsp>=1&&(s->dnpc>=addr[rsp-1].start&&s->dnpc<addr[rsp-1].end)){
		rsp--;	
		printf("0x%08x ret %s\n",s->pc,addr[rsp].func_name);	
		log_write("0x%08x ret %s\n",s->pc,addr[rsp].func_name);	
		return ;
		}//pd ret
		else{

		for(int i=0;i<cnt_func_num;i++){
//printf("funcs is : %s start : %08x end: %08x\n",func_addr[i].func_name,func_addr[i].start,func_addr[i].end);
		if(s->dnpc<func_addr[i].end&&s->dnpc>=func_addr[i].start){
		  rsp++;
			addr[rsp].func_name=func_addr[i].func_name;
			addr[rsp].start=func_addr[i].start;
			addr[rsp].end=func_addr[i].end;
	//	  printf("0x%08x call %s\trsp : %d \n",s->pc,addr[rsp].func_name,rsp);	
			log_write("0x%08x: call [%s @ 0x%08x]\n",s->pc,addr[rsp].func_name,s->dnpc);
		  return ;
		}
		
		}
	  printf("\n\n\nUsing undefine function\ns->pc is :%08x\n%08x\n",s->pc,s->dnpc);
		exit(-1);
		}//pd call
 }
//}
return ;
} 
 */

static void ftrace(Addr_Imfo *func_addr,Decode *s){
static vaddr_t addr[20000];	
static int rsp=0;
Assert(rsp<2000,"\n\n\n\n\n\n\nStack Overflow !!!!!!!\n\n\n\n\n\n");	
//printf("ALL IS OK\n");
if(((s->isa.inst.val & 0b00000000000000000000000001111111) == 0b00000000000000000000000001101111) || ((s->isa.inst.val & 0b00000000000000000111000001111111) == 0b00000000000000000000000001100111)){//jalr and jal
	if(s->isa.inst.val == 0b00000000000000001000000001100111){
        for(int i = 0; i < cnt_func_num; i++){
					printf("0x%08x : ",s->pc);
            if(s->pc >= func_addr[i].start && s->pc < func_addr[i].end){
							for(int i=0;i<rsp;i++){
							printf(" ");	
							}
                printf("ret %s\trsp : %d \n",  func_addr[i].func_name, rsp-1);	
			          printf("addr[rsp] : %08x\t s->dnpc : %08x \n",addr[i],s->dnpc);
                log_write("0x%08x: ret [%s @ 0x%08x]\n", s->pc, func_addr[i].func_name, s->dnpc);
                rsp--;
                return;
            }
        }
        // 如果没有找到匹配的函数，输出错误信息并退出
        printf("\n\n\nUsing undefine function\ns->pc is :%08x\n%08x\n", s->pc, s->dnpc);
        exit(-1);
    }else {
		for(int i=0;i<cnt_func_num;i++){
//printf("funcs is : %s start : %08x end: %08x\n",func_addr[i].func_name,func_addr[i].start,func_addr[i].end);
		if(s->dnpc>=func_addr[i].start&&s->dnpc<func_addr[i].end){
		  rsp++;
			addr[rsp]=s->pc+4;
			printf("0x%08x : ",s->pc);
			for(int i=0;i<rsp;i++){
							printf(" ");	
							}
			printf("call %s\trsp : %d \n",func_addr[i].func_name,rsp);	
			printf("addr[rsp] : %08x\t s->dnpc : %08x \n",addr[i],s->dnpc);
		  //printf("ARE YOU OK??\n");
			log_write("0x%08x: call [%s @ 0x%08x]\n",s->pc,func_addr[i].func_name,s->dnpc);
		  //printf("ARE YOU OK??\n");
		  return ;
		}
		
		}
	  printf("\n\n\nUsing undefine function\ns->pc is :%08x\n%08x\n",s->pc,s->dnpc);
		exit(-1);
		}//pd call
		
	}

return ;
}


#endif 



static void execute(uint64_t n) {
  Decode s;
  
#ifdef CONFIG_ITRACE
	char iringbuf[20][128];
	char iringbuf_reg_state[2][512];
	int cout_pc_num=0;
#endif	
	

  	
#ifdef CONFIG_FTRACE
Addr_Imfo *func_addr = read_sym_func();
for(int i=0;i<cnt_func_num;i++){
printf("funcs is : %s start : %08x end: %08x\n",func_addr[i].func_name,func_addr[i].start,func_addr[i].end);
}
#endif

  for (;n > 0; n --) {
	//printf("cpu.pc : %08x\n",cpu.pc);
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);


#if CONFIG_ITRACE
		char buf[512]={0};
		for (int i=0;i<32;i++){//storage reg information
		char buf_temp[16]={0};
		sprintf(buf_temp,"%s : %08x\n",regs[i],(int)cpu.gpr[i]);	
		strcat(buf,buf_temp);
 	}
		strcpy(*(iringbuf_reg_state+cout_pc_num%2),buf);//use iringbuf storage the reg information
	  iring_load(iringbuf,&s,cout_pc_num++);//storage the information of instructions		

		//printf("ARE YOU OK??\n");
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
#endif		



#ifdef CONFIG_FTRACE
    ftrace(func_addr,&s);
#endif
    if (nemu_state.state != NEMU_RUNNING) {
	#ifdef CONFIG_FTRACE
		free(func_addr);
	#endif		
		break;
	}
	static int t=1;
	if(t<=200)
	printf("cpu exec : %d\n",t++);
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
  //isa_reg_display();
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
  
if (n == 0){
  	nemu_state.state = NEMU_QUIT;
   	}
  execute(n);
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
