#include "Vysyx_24090015_top.h"
#include "verilated.h"
#include <stdio.h>
#include <verilated_vcd_c.h>  //启动波追踪
//#include <nvboard.h>

//接入nvboard
//void nvboard_band_all_pins(Vverilog *top);



int main(int argc,char **argv){
	VerilatedContext* Contextp = new VerilatedContext;
	Contextp->commandArgs(argc,argv);//初始化verilator
	
	
	Verilated::traceEverOn(true);//启动追踪
	
	Vysyx_24090015_top * top=new Vysyx_24090015_top;//创建top实体
														 
	VerilatedVcdC *tfp=new VerilatedVcdC;//创建VCD追踪文件对象
  	top->trace(tfp,99);
	tfp->open("wave.vcd");
	
	//nvboard接入引脚并且初始化
	//nvboard_bind_all_pins(top);
	//nvboard_init();
	
	std::srand(time(NULL));
	int simTime=0;
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
    0x02010113   // addi sp, sp, 32
    0x00100073 //ebreak
};
unsigned int clk=0;
	while (!top->flag){
		clk = clk ^ 1;
		top->clk=clk;
		if(clk) top->inst=inst[top->pc];
	Contextp->timeInc(1);
	top ->eval();
	 tfp->dump(Contextp->time());  // dump 波形数据
	 
	 //nvboard 更新
	 //nvboard_update();
	 
	 simTime++;
	}
	tfp->close(); 
	delete tfp;
	delete top;
	delete Contextp;
	return 0;
}
