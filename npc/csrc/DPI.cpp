#include "common.h"
#include "svdpi.h"
#include "my_share.h"
#include "verilated_dpi.h"
#include "Vysyx_24090015_top__Dpi.h"


extern "C" int ebreak(int a){
		//printf("the input ebreak inst is : %08x\n",a);
		if(a ==  0x00100073){
		return 1;	
		}	
		else return 0;
}

const char *regs[] = {                                                
		"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",                     
		"s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",                     
		"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",                     
		"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"                    
}; 

													 
uint32_t sram[MAX_SRAM_SIZE]={0};

extern int read_wire(int sec);

	svScope scope;

void read_regs() {
	scope = svGetScopeFromName("TOP.ysyx_24090015_top") ;
	svSetScope(scope);
	int wen=read_wire(1);
	int waddr=read_wire(2);
	int wdata=read_wire(3);
	//printf("wen: 0x%08x,waddr : 0x%08x,wdata : 0x%08x\n",wen,waddr,wdata);
			if(wen&&waddr!=0){
			cpu.gpr[waddr]=wdata;	
			}
}


void npc_reg_display(){
printf("reg\tvalue\n");
	for(int i=0;i<31;i++){
		printf("%s\t0x%08x\n",regs[i],cpu.gpr[i]);
		}
		
	return;
}


extern "C" int pmem_read(int raddr){
//printf("vaddr : %08x\n",raddr-CONFIG_MBASE);
if(raddr<0x80000000||raddr>0x8fffffff){
	printf("address = " %08x " is out of bound of pmem [" 0x80000000 ", " 0x8fffffff "] at pc = " %08x,
      raddr, cpu.pc);
	  log_write("address = " %08x " is out of bound of pmem [" 0x80000000 ", " 0x8fffffff "] at pc = " %08x,
      raddr, cpu.pc);
	exit(-1);
}
log_write("pmem_read\taddr : %08x\tdata : %08x\n",raddr,*(uint32_t *)(vaddr + (raddr -CONFIG_MBASE)));
return *(uint32_t *)(vaddr + (raddr -CONFIG_MBASE));
}


extern "C" void pmem_write(int waddr,int wdata,char wmask){

	uint8_t *temp= (uint8_t *)&wdata;
	if(waddr<0x80000000||waddr>0x8fffffff){
		printf("address = " %08x " is out of bound of pmem [" 0x80000000 ", " 0x8fffffff "] at pc = " %08x,
		  waddr, cpu.pc);
		  log_write("address = " %08x " is out of bound of pmem [" 0x80000000 ", " 0x8fffffff "] at pc = " %08x,
		  waddr, cpu.pc);
		exit(-1);
	}

	if(wmask==0b0001){

		log_write("pmem_write\taddr : %08x\tdata : %02x\n",waddr,temp[0]);
		vaddr[waddr-CONFIG_MBASE]=temp[0];
	}else if(wmask==0b0011){

		log_write("pmem_write\taddr : %08x\tdata : %02x %02x\n",waddr,temp[0],temp[1]);
		vaddr[waddr-CONFIG_MBASE]=temp[0];
		vaddr[waddr-CONFIG_MBASE+1]=temp[1];
	}else if(wmask==0b0111){

		log_write("pmem_write\taddr : %08x\tdata : %02x %02x %02x\n",waddr,temp[0],temp[1],temp[2]);
		vaddr[waddr-CONFIG_MBASE]=temp[0];
		vaddr[waddr-CONFIG_MBASE+1]=temp[1];
		vaddr[waddr-CONFIG_MBASE+2]=temp[2];
	}else if(wmask==0b1111){

		log_write("pmem_write\taddr : %08x\tdata : %02x %02x %02x %02x\n",waddr,temp[0],temp[1],temp[2],temp[3]);
		vaddr[waddr-CONFIG_MBASE]=temp[0];
		vaddr[waddr-CONFIG_MBASE+1]=temp[1];
		vaddr[waddr-CONFIG_MBASE+2]=temp[2];
		vaddr[waddr-CONFIG_MBASE+3]=temp[3];
	}
	return ;
	}