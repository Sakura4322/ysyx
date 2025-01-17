#include "Vysyx_24090015_top.h"
#include "verilated.h"
#include "common.h"
#include "my_share.h"
#include <verilated_vcd_c.h>  //启动波追踪
//#include <getopt.h> 
//#include <memory/paddr.h>
//#include <nvboard.h>


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

std::srand(time(NULL));

}

void step_and_dump_wave(){

	clk = clk ^ 1;
	top->clk=clk;
	
	printf("top->pc : 0x%08x\n",top->pc);
	//if(clk) top->inst=inst[top->pc/4];
	if(clk) top->inst=vaddr[top->pc/4];
	contextp->timeInc(1);
	top ->eval();
	tfp->dump(contextp->time());  // dump 波形数据

}
void sim_exit(){
	step_and_dump_wave();
	tfp->close();
	
	delete tfp;
	delete contextp;
	delete top;
}



int main(int argc,char **argv){
	/*
	VerilatedContext* Contextp = new VerilatedContext;
	Contextp->commandArgs(argc,argv);//初始化verilator
	
	
	Verilated::traceEverOn(true);//启动追踪
	
	Vysyx_24090015_top * top=new Vysyx_24090015_top;//创建top实体
														 
	VerilatedVcdC *tfp=new VerilatedVcdC;//创建VCD追踪文件对象
  	top->trace(tfp,99);
	tfp->open("wave.vcd");
	*/
	
  sim_init(argc,argv);

	int simTime=0;


	/*
//get bin
	 argv++;
   img_file=*argv;
	 printf("\n\n\n\n\n\n\nimg_file : %s\n\n\n\n\n",img_file);
	//parse_args(argc,argv);
	long img_size=load_img();
	
	*/
	int a=20;

	/*
	while (!top->flag){
	//while (a--){
	
		clk = clk ^ 1;
		top->clk=clk;
	top ->eval();
		printf("top->pc : 0x%08x\n",top->pc);
		//if(clk) top->inst=inst[top->pc/4];
		if(clk) top->inst=vaddr[top->pc/4];
	Contextp->timeInc(1);
	top ->eval();
	 tfp->dump(Contextp->time());  // dump 波形数据
	 
	 
	 simTime++;
	}
	*/

	
	
	while (!top->flag){
	//while (a--){
step_and_dump_wave();
	 simTime++;
	}


	//checking pragram ending
	if(!top->hit_good_or_bad){
	printf("\n\n\n\n\n\nHIT GOOD TRAP\n\n\n\n\n\n");	
	}else{
	printf("\n\n\n\n\n\nHIT GOOD TRAP\n\n\n\n\n\n");		
	}


/*
	tfp->close(); 
	delete tfp;
	delete top;
	delete Contextp;
	*/


sim_exit();

	return 0;
}
