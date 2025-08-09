#include "common.h"
#include "my_share.h"

NPCState npc_state;
CPU_state cpu={};

static void iring_load(char (*a)[128],Decode *b,int cout_pc_num){
	char (*p)[128]=a;
	char *s=b->logbuf;
	//uint32_t inst_num=b->inst;
	//char *s = to_string(inst_num);
  strcpy(*(p+(cout_pc_num%20)),s);
}


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
					func_addr=(Addr_Imfo*)malloc(cnt_func_num*sizeof(Addr_Imfo));


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

					//free(ehdr_globle);
					free(shdr);
					free(sym);
					//free(strtab);

					return func_addr;

}


static void ftrace(Addr_Imfo *func_addr,Decode *s){
static uint32_t addr[200000];	
static int rsp=0;
//Assert(rsp<2000,"\n\n\n\n\n\n\nStack Overflow !!!!!!!\n\n\n\n\n\n");	
if(rsp>=200000){
	printf("\n\n\n\n\n\n\nStack Overflow !!!!!!!\n\n\n\n\n\n");
	return ;
	}
//printf("ALL IS OK\n");
if(((s->inst & 0b00000000000000000000000001111111) == 0b00000000000000000000000001101111) || ((s->inst & 0b00000000000000000111000001111111) == 0b00000000000000000000000001100111)){//jalr and jal
	if(s->inst == 0b00000000000000001000000001100111){
        for(int i = 0; i < cnt_func_num; i++){
					// printf("0x%08x : ",s->pc);
            if(s->pc >= func_addr[i].start && s->pc < func_addr[i].end){
							// for(int i=0;i<rsp;i++){
							// printf(" ");	
							// }
                // printf("ret %s\trsp : %d \n",  func_addr[i].func_name, rsp-1);	
			    //       printf("addr[rsp] : %08x\t s->dnpc : %08x \n",addr[i],s->dnpc);
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
			// printf("0x%08x : ",s->pc);
			// for(int i=0;i<rsp;i++){
			// 				printf(" ");	
			// 				}
			// printf("call %s\trsp : %d \n",func_addr[i].func_name,rsp);	
			// printf("addr[rsp] : %08x\t s->dnpc : %08x \n",addr[i],s->dnpc);
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

Decode s={};
static void execute(uint64_t n) {
	static char iringbuf[20][128];
	static char iringbuf_reg_state[2][512];
	static int cout_pc_num=0;



//init disasm before step_and_dump_wave
//init_disasm("riscv32");

// Addr_Imfo *func_addr = read_sym_func();
// for(int i=0;i<cnt_func_num;i++){
// printf("funcs is : %s start : %08x end: %08x\n",func_addr[i].func_name,func_addr[i].start,func_addr[i].end);
// }

  for (;n > 0; n --) {
	char buf[512]={0};
    step_and_dump_wave(&s);
   if(diff_on){
	static int cnt_fuck=0;			//nemu 运行也和npc 一样clk=1时等待，clk=0时运行 
    cnt_fuck++;
    if(cnt_fuck%2==1&&cnt_fuck>2)difftest_step(s.pc,s.dnpc);
   }
    if (top->flag)npc_state.state=NPC_END;
    

    //trace_and_difftest(&s, cpu.pc);


// if(n%2==0){
// for (int i=0;i<32;i++){//storage reg information
// 		char buf_temp[16]={0};
// 		sprintf(buf_temp,"%s : %08x\n",regs[i],cpu.gpr[i]);	
// 		strcat(buf,buf_temp);
//  	}
 	
 	
// 		strcpy(*(iringbuf_reg_state+cout_pc_num%2),buf);//use iringbuf storage the reg information
// 	  iring_load(iringbuf,&s,cout_pc_num++);//storage the information of instructions		

// ftrace

//     ftrace(func_addr,&s);



// itrace
// 		ret == 0 is good trap  or bad trap
			
// 	}
	
	
// 	if (!npc_state.halt_ret&& npc_state.state!=NPC_RUNNING){
// 			 cout_pc_num-=1;
// 	for(int i=0;i<20;i++){
// 	if(i==cout_pc_num%20){
// if (strcmp(iringbuf_reg_state[0],iringbuf_reg_state[1])==0){
// log_write("REGS INFO SAME\n");
// }else{
// 	log_write("REGS INFO DIFFERENT\n");
// }
//  log_write("\nthe reg information : \n%s\n",*(iringbuf_reg_state+((cout_pc_num-1)%2)));
//  log_write("//////////////////////////////////////the wrong ///////////////////////////////////\n"); 		
// 	}	
//  log_write("%s\n", *(iringbuf+i)); 
// 	if(i==cout_pc_num%20){
//  log_write("//////////////////////////////////////the wrong ///////////////////////////////////\n"); 		
//  log_write("%s\n",*(iringbuf_reg_state+(cout_pc_num%2)));
// 	}	
// 	}	
// 		}
		
		
		


    if (npc_state.state != NPC_RUNNING){
		// free(func_addr);
		break;
	} 
    
  }
}

void cpu_exec(uint64_t n) {
  log_write("jinru cpu_exec\n");
   switch (npc_state.state) {
    case NPC_END: 
    case NPC_ABORT:
      printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      return;
    default: npc_state.state = NPC_RUNNING;
  }

  if (n == 0){
  	npc_state.state = NPC_QUIT;
   	}
  execute(n);
  

  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: case NPC_ABORT:
    	npc_state.halt_ret=top->hit_good_or_bad;
    	npc_state.halt_pc=top->pc;
    	/*
      Log("npc: %s at pc = " FMT_WORD,
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
			//log_write()
      // fall through
      */
    case NPC_QUIT: 
			npc_state.state=NPC_END;
			return;
      break;
  }
}


/*
void assert_fail_msg() {
  isa_reg_display();
}
*/
