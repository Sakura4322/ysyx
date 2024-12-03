#include <verilated.h>

extern "C" int ebreak(int a){
		//printf("the input ebreak inst is : %08x\n",a);
		if(a ==  0x00100073){
		return 1;	
		}	
		else return 0;
}
