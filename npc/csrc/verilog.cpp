//#include "Vysyx_24090015_top.h"
//#include "verilated.h"
#include "common.h"
#include "my_share.h"
//#include <verilated_vcd_c.h>  //启动波追踪
//#include <getopt.h> 
//#include <memory/paddr.h>
//#include <nvboard.h>

 extern  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
 
 
unsigned int clk=0;
VerilatedContext *contextp = NULL;
Vysyx_24090015_top* top=NULL;
VerilatedVcdC *tfp=NULL;

/*
unsigned int inst[11] = {
    0xffc10113,  // addi sp, sp, -4
    0x00278713,  // addi a4, a5, 2
    0x00678793,  // addi a5, a5, 6
    0xfff78793,  // addi a5, a5, -1
    0x74248713,  // addi a4, s1, 1858
    0x4c850513,  // addi a0, a0, 1224
    0xfe010113,  // addi sp, sp, -32
    0xfff68793,  // addi a5, a3, -1
    0x00170713,  // addi a4, a4, 1
    0x02010113,   // addi sp, sp, 32
    0x00100073 //ebreak
};
*/

void sim_init(int argc,char **argv){
contextp = new VerilatedContext;
contextp->commandArgs(argc,argv);
top= new Vysyx_24090015_top;

contextp->traceEverOn(true);
tfp = new VerilatedVcdC;
top->trace(tfp,99); 
tfp->open("wave.vcd");
cpu.pc=CONFIG_MBASE;
std::srand(time(NULL));
init_disasm("riscv32");			//init disasm 
parse_args(argc,argv);			//parse args
long img_size=load_img();		
if(diff_on)
init_difftest(diff_so_file, img_size, difftest_port);	//init difftest port
/*
printf("Inst\n");
for (int i=0;i<img_size;i++){
	//printf("%08x : %08x\n",0x80000000+i*4,pmem_read(0x80000000+i*4));
	printf("%x\n",vaddr[i]);
}
	*/

}



void step_and_dump_wave(Decode *s){
	
	clk = clk ^ 1;
	top->clk=clk;
	
	top ->eval();
	//printf("top->pc : 0x%08x\n",top->pc);
//	printf("vaddr index: %d\n",top->pc/4);

	//printf("inst :  : 0x%08x\n",inst[top->pc/4]);
	// if(clk) top->inst=inst[top->pc/4];


//input instructions
	// printf("inst :  : 0x%08x\n",vaddr[top->pc/4]);
	if(clk){
	cpu.pc=top->pc;
	read_regs();
	uint32_t temp_inst = pmem_read(top->pc);
	// printf("get inst successful top->pc : %08x \n",top->pc);
	// printf("inst : %08x\n",temp_inst);
	 	top->inst=temp_inst;
		s->pc=top->pc;
		cpu.pc=s->pc;
		s->inst = temp_inst;
		
		
		
///////////////////////////////////////////////////////////itrace
char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), "0x%08x:", s->pc);
  
  
  //int ilen = s->snpc - s->pc;
  int ilen = 4;
  int i;
  uint8_t *inst = (uint8_t *)&s->inst;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  //int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int ilen_max =4;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  

  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,s->pc, (uint8_t *)&s->inst, ilen);
  
      
      
///////////////////////////////////////////////////////itrace
log_write("%08x:\t\t%s\n",s->pc,p);

	}else {
		
		
		
		s->dnpc=top->dnpc;
		
	}

  
	// contextp->timeInc(1);
	// tfp->dump(contextp->time());  // dump 波形数据
    
 }

// void free_alloc(){
// 	free(ehdr_globle);
// 	free(shdr_globle);
// 	free(sym_globle);
// 	free(str_globle);
// }

void sim_exit(){
	//free_alloc();
	free(vaddr);
	tfp->close();
	
	delete tfp;
	delete top;
	delete contextp;
}

int main(int argc,char **argv){
	// printf("I'M OK NOW\n"); 
	
  sim_init(argc,argv);

	int simTime=0;

//get bin
	 //argv++;
/*
   img_file=*argv;
	 printf("\n\n\n\n\n\n\nimg_file : %s\n\n\n\n\n",img_file);
*/

	
	int a=20;

sdb_mainloop();
	
	/*
	while (!top->flag){
	//while (a--){
	step_and_dump_wave();
	 simTime++;
	}

*/
	//checking pragram ending
	if(!top->hit_good_or_bad){
	printf("\n\n\n\n\n\nHIT GOOD TRAP\n\n\n\n\n\n");	
	}else{
	printf("\n\n\n\n\n\nHIT GOOD TRAP\n\n\n\n\n\n");		
	}


sim_exit();
	return 0;
}
