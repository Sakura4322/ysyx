#include "Vverilog.h"
#include "verilated.h"
#include <stdio.h>
#include <verilated_vcd_c.h>  //启动波追踪
#include <nvboard.h>

//接入nvboard
void nvboard_band_all_pins(Vverilog *top);



int main(int argc,char **argv){
	VerilatedContext* Contextp = new VerilatedContext;
	Contextp->commandArgs(argc,argv);//初始化verilator
	
	
	Verilated::traceEverOn(true);//启动追踪
	
	Vverilog* top=new Vverilog;//创建top实体
														 
	VerilatedVcdC *tfp=new VerilatedVcdC;//创建VCD追踪文件对象
  	top->trace(tfp,99);
	tfp->open("wave.vcd");
	
	//nvboard接入引脚并且初始化
	nvboard_bind_all_pins(top);
	nvboard_init();
	
	std::srand(time(NULL));
	int simTime=0;
	while (!Contextp->gotFinish()&&simTime<1000){
	Contextp->timeInc(1);
	int a=rand()&1;
	int b=rand()&1;
	top->a=a;
	top->b=b;
	top ->eval();
	 tfp->dump(Contextp->time());  // dump 波形数据
	 
	 //nvboard 更新
	 nvboard_update();
	 
	 printf("a = %d, b = %d, f = %d\n", a, b, top->f);
	 assert(top->f==(a^b));
	 simTime++;
	}
	tfp->close(); 
	delete tfp;
	delete top;
	delete Contextp;
	return 0;
}
