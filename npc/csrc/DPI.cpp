#include "common.h"
#include "svdpi.h"
#include "my_share.h"
#include "verilated_dpi.h"
#include "Vysyx_24090015_top__Dpi.h"
#include "device.h"

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
/*
void read_regs() {
	scope = svGetScopeFromName("TOP.ysyx_24090015_top") ;
	svSetScope(scope);
	int wen=read_wire(1);
	int waddr=read_wire(2);
	int wdata=read_wire(3);
	printf("wen: 0x%08x,waddr : 0x%08x,wdata : 0x%08x\n",wen,waddr,wdata);
			if(wen&&waddr!=0){
			cpu.gpr[waddr]=wdata;	
			}
}
*/

void read_regs() {
	scope = svGetScopeFromName("TOP.ysyx_24090015_top.reg0");
	svSetScope(scope);
	if (scope == NULL) {
        printf("Failed to get scope\n");
		exit(-1);
        return;
    }
	for(int i=0;i<32;i++){
		cpu.gpr[i]=read_wire(i);
	}
	scope = svGetScopeFromName("TOP.ysyx_24090015_top.csr_regfiles_instance");
	svSetScope(scope);
	for(int i=0;i<4;i++){
		cpu.csr[i]=read_wire(i);
	}
}

void npc_reg_display(){
printf("reg\tvalue\n");
	for(int i=0;i<32;i++){
		printf("%s\t0x%08x\n",regs[i],cpu.gpr[i]);
		}
	
		printf("pc\t0x%08x\n",cpu.pc);
		printf("mstatus\t0x%08x\n",cpu.csr[0]);
		printf("mtvec  \t0x%08x\n",cpu.csr[1]);
		printf("mepc   \t0x%08x\n",cpu.csr[2]);
		printf("mcause \t0x%08x\n",cpu.csr[3]);
	return;
}


extern "C" int pmem_read(int raddr){
//printf("vaddr : %08x\n",raddr-CONFIG_MBASE);
if(raddr<0x80000000||raddr>0xffffffff){
	npc_state.state = NPC_ABORT;
	printf("pmem_read : address =  %08x  is out of bound of pmem [ 0x80000000 ,  0xffffffff ] at pc = %08x\n" ,
      raddr, cpu.pc);
	//   log_write("pmem_read : address =  %08x  is out of bound of pmem [ 0x80000000 ,  0xffffffff ] at pc = %08x\n" ,raddr, cpu.pc);
	  return 0;
	//exit(-1);
}

// if(raddr==RTC_ADDR){
// 	log_write("dtrace_rtc\taddr : %08x\tdata : %ld\n",raddr,get_time());
// 	return get_time();
// }else if(raddr==RTC_ADDR+4){
// 	// raddr=get_time()>>32;
// 	return get_time()>>32;
// } 
// else if(raddr>=DEVICE_BASE){
	if(raddr>=DEVICE_BASE){
	log_write("dtrace_rtc\taddr : %08x\n",raddr);
	if(raddr==SERIAL_PORT) return mmio_read(raddr, 1);
	else return mmio_read(raddr, 4);
	
}
log_write("pmem_read\taddr : %08x\tdata : %08x\n",raddr,*(uint32_t *)(vaddr + (raddr -CONFIG_MBASE)));
return *(uint32_t *)(vaddr + (raddr -CONFIG_MBASE));
}


extern "C" void pmem_write(int waddr,int wdata,char wmask){

	uint8_t *temp= (uint8_t *)&wdata;
	if(waddr<0x80000000||waddr>0xfffffff){
		npc_state.state = NPC_ABORT;
		printf("pmem_write : address =  %08x  is out of bound of pmem [ 0x80000000 ,  0xffffffff ] at pc = %08x\n" ,
		  waddr, cpu.pc);
		//   log_write("pmem_write : address =  %08x  is out of bound of pmem [ 0x80000000 ,  0xffffffff ] at pc = %08x\n" ,waddr, cpu.pc);
		  return ;
		//exit(-1);
	}

	// if(waddr>=SERIAL_PORT && waddr < FB_ADDR){
		
	// 	putchar(temp[0]);
	// 	log_write("dtrace_serial\taddr : %08x\tdata : %c\n",waddr,temp[0]);
	// 	return;
	// }
	// else if(waddr>=VGACTL_ADDR && waddr < AUDIO_ADDR ){
	// 	log_write("dtrace_vga\taddr : %08x\tdata : %x\n",waddr,temp[0]);
	// }
	// else if(waddr>=FB_ADDR && waddr < AUDIO_SBUF_ADDR ){
	// 	log_write("dtrace_fb \taddr : %08x\tdata : %c\n",waddr,temp[0]);
	// }
	// else if(waddr>=DEVICE_BASE){
		if(waddr>=DEVICE_BASE){
		log_write("dtrace_test\taddr : %08x\tdata : %d\n",waddr,temp[0]);
		int len=0;
		if(wmask==0b0001) len =1;
		else if(wmask==0b0011) len==2;
		else if(wmask==0b1111) len=4;
		else assert(0);
		log_write("dtrace_test\taddr : %08x\tdata : %d\n",waddr,temp[0]);
		mmio_write(waddr, len, wdata);
		return ;
	}

	if(wmask==0b0001){

		log_write("pmem_write\taddr : %08x\tdata : %02x\n",waddr,temp[0]);
		vaddr[waddr-CONFIG_MBASE]=temp[0];
	}else if(wmask==0b0011){

		log_write("pmem_write\taddr : %08x\tdata : %02x %02x\n",waddr,temp[0],temp[1]);
		vaddr[waddr-CONFIG_MBASE]=temp[0];
		vaddr[waddr-CONFIG_MBASE+1]=temp[1];
	}else if(wmask==0b1111){

		log_write("pmem_write\taddr : %08x\tdata : %02x %02x %02x %02x\n",waddr,temp[0],temp[1],temp[2],temp[3]);
		vaddr[waddr-CONFIG_MBASE]=temp[0];
		vaddr[waddr-CONFIG_MBASE+1]=temp[1];
		vaddr[waddr-CONFIG_MBASE+2]=temp[2];
		vaddr[waddr-CONFIG_MBASE+3]=temp[3];
	}
	return ;
	}