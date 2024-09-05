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
        printf("%s\t%x\t%u\n", regs[i],isa_reg_str2val(regs[i], success),isa_reg_str2val(regs[i], success));  
    }    
}

word_t isa_reg_str2val(const char *s, bool *success) {
		for(int i=0;i<num_regs;i++){
			if (strcmp(s,regs[i])==0){
				return cpu.gpr[i];
				}
			}
			*success = false ;
			return 0;
  return 0;	
}

void isa_reg_changeval(const char *s,int new_value){
		s++;
		printf("input *s =%sn",s);
		for(int i=0;i<num_regs;i++){
		printf("正在进行循环，s = %s  regs = %s\n",s,regs[i]);
			if (strcmp(s,regs[i])==0) {
				
				cpu.gpr[i]=new_value;
				printf("new_value = %d\n",cpu.gpr[i]);
				}
			}
	}
