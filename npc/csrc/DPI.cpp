#include "common.h"
#include "svdpi.h"
#include "my_share.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

extern "C" int ebreak(int a){
		//printf("the input ebreak inst is : %08x\n",a);
		if(a ==  0x00100073){
		return 1;	
		}	
		else return 0;
}

int reg_value[32]={0};


void read_regs(int wen,int waddr,int wdada) {
			if(wen){
			reg_value[waddr]=wdata;	
			}
}

/*	
exter "C" void get_reg_value(int a[32]){
	for(int i=0;i<32;i++){
		reg_value[i]=a[i];
		}	
		return ;
	}
	 */

void isa_reg_display(){
	read_regs();
printf("reg\tvalue\n");
	for(int i=0;i<31;i++){
		printf("%s\t0x%08x\n",regs[i],reg_value[i]);
		}
		
	return;
}
