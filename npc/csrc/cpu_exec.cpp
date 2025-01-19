#include "common.h"
#include "my_share.h"

NEMUState nemu_state;

static void iring_load(char (*a)[128],Decode *b,int cout_pc_num){
	char (*p)[128]=a;
	char *s=b->logbuf;
	//uint32_t inst_num=b->inst;
	//char *s = to_string(inst_num);
  strcpy(*(p+(cout_pc_num%10)),s);
}

static void execute(uint64_t n) {
  Decode s;
	char iringbuf[20][128];
	char iringbuf_reg_state[2][512];
	int cout_pc_num=0;


  for (;n > 0; n --) {
	char buf[512]={0};
    step_and_dump_wave();
    if (top->flag)nemu_state.state=NEMU_END;
    //trace_and_difftest(&s, cpu.pc);



		for (int i=0;i<32;i++){//storage reg information
		char buf_temp[16]={0};
		sprintf(buf_temp,"%s : %08x",regs[i],reg_value[i]);	
		strcat(buf,buf_temp);
 	}
 	
 	
		strcpy(*(iringbuf_reg_state+cout_pc_num%2),buf);//use iringbuf storage the reg information
	  iring_load(iringbuf,&s,cout_pc_num++);//storage the information of instructions		

/*ftrace
#ifdef CONFIG_FTRACE
    ftrace(func_addr,&s);
#endif
*/


//itrace
		//printf("ARE YOU OK??\n");
		if (!nemu_state.halt_ret&& nemu_state.state!=NEMU_RUNNING){
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
    
  }
}

void cpu_exec(uint64_t n) {
  
   switch (nemu_state.state) {
    case NEMU_END: 
    case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  if (n == 0){
  	nemu_state.state = NEMU_QUIT;
   	}
  execute(n);
  

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
    	nemu_state.halt_ret=top->hit_good_or_bad;
    	nemu_state.halt_pc=top->pc;
    	/*
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
			//log_write()
      // fall through
      */
    case NEMU_QUIT: 
			nemu_state.state=NEMU_END;
			return;
      break;
  }
}


/*
void assert_fail_msg() {
  isa_reg_display();
}
*/
