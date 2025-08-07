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
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

static int num_regs = sizeof(regs) / sizeof(regs[0]);  
 
void isa_reg_display() {
 bool success_ptr = true;
 bool *success = &success_ptr;
    // 遍历并输出每个寄存器名称  
    for (int i = 0; i < num_regs; i++) {  
        printf("%s\t%08x\t%u\n", regs[i],isa_reg_str2val(regs[i], success),isa_reg_str2val(regs[i], success));  
    }    
    printf("%s\t%08x\t%u\n", "pc",isa_reg_str2val("pc", success),isa_reg_str2val("pc", success));
    printf("%s\t%08x\t%u\n", "mepc",cpu.csrs.mepc,cpu.csrs.mepc);
    printf("%s\t%08x\t%u\n", "mstatus",cpu.csrs.mstatus,cpu.csrs.mstatus);
    printf("%s\t%08x\t%u\n", "mcause",cpu.csrs.mcause,cpu.csrs.mcause);
    printf("%s\t%08x\t%u\n", "mtvec",cpu.csrs.mtvec,cpu.csrs.mtvec);


}

word_t isa_reg_str2val(const char *s, bool *success) {//输入的含有$
																											//input havent $
	char *names = strdup(s);
	names = strtok(names," ");
	if (strcmp(names,regs[0])==0){
				return cpu.gpr[0];
				}
		for(int i=1;i<num_regs;i++){
			if (strcmp(names,regs[i])==0){
			//	printf("cpu.gpr[%d]==%d",i,cpu.gpr[i]);
				return cpu.gpr[i];
				}
			
			}
			if (strcmp(names,"pc")==0){
			//printf("successfilly output the value of pc\n ");
			//printf("%x\n",cpu.pc);
			free(names);
				return cpu.pc;
				}
			*success = false ;
			return 0;
  return 0;	
}

void isa_reg_changeval(const char *s,int new_value){
		s++;
		//printf("input *s =%sn",s);
		for(int i=0;i<num_regs;i++){
			if (strcmp(s,regs[i])==0) {	
				cpu.gpr[i]=new_value;
				printf("new_value = %8x\n",cpu.gpr[i]);
				return ;
				}
			}
		if (strcmp(s,"pc")==0){
			cpu.pc=new_value;
			printf("new_value = %8x\n",cpu.pc);
			return ;
			}
			
			printf("Bad reg");
			return ;
	}
