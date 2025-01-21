/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

//1:ref copy dut. 0:dut copy ref.
__EXPORT void difftest_memcpy(uint32_t addr, uint32_t *vaddr, size_t n, bool direction) {
if(direction){
	for(int i=0;i<n/4;i++){
		printf("difftest_memcpy : vaddr : 0x%08x\n",vaddr[i]);
		}
	word_t *temp = (word_t *)vaddr;
	for(int i=0;i<n;i++){
		printf("difftest_memcpy : temp : 0x%02x\n",temp[i]);
		}
		
	for(int i=0;i<n;i++){
	
	paddr_write(addr,1,temp[i]);
	}
	}	
}



//1:ref copy dut. 0:dut copy ref.
__EXPORT void difftest_regcpy(CPU_state *dut_regs, bool direction) {
if(direction){
for(int i=0;i<32;i++){
	cpu.gpr[i]=dut_regs->gpr[i];
		}	
	}else {
for(int i=0;i<32;i++){
	dut_regs->gpr[i]=cpu.gpr[i];
		}	
	
	}	
}

__EXPORT void difftest_exec(uint64_t n) {
	cpu_exec(n);
  assert(0);
}

__EXPORT void difftest_raise_intr(uint64_t NO){
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
