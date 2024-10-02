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
#include <memory/paddr.h>


#include "sdb.h"
#define NR_WP 32
struct WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP *new_wp() {
    assert(free_ != NULL);
    WP* wp = free_;
    free_ = free_->next;
    //printf("获取监视点成功,监视点编号为 : %d\n监视目标为 ： %s\n",wp->NO,wp->name);
    //将监视点装在head 上面
    wp->next = head;
    head = wp;
    	return wp;
}

void free_wp(int num) {//寻找head里面的每个节点，找到之后把这个节点删除，装到free_头部
printf("删除监视点成功\n");
	WP *cur = head;
	WP *front_cur=head;
	    while (cur!=NULL){
	    	if (cur->NO==num&&cur!=front_cur){
	    		head->next = cur->next;
	    		break;
	    		}else if(cur->NO==num&&cur==front_cur){
	    			break;
	    			}
	    		front_cur = cur;
	    		cur = cur ->next;
	    	}
	    	if (cur == NULL){
	    		printf("未找到该监视点，请输入正确的监视点");
	    		}
    // 将监视点加入到空闲链表的头部
    cur->next = free_;
    free_ = cur;
}

void display_wp(){
printf("\t    NO  value\n");
	WP *cur=head;
	while(cur!=NULL){
		printf("存在监视点  %d \t%08x \n监视目标为 ： %s\n",\
		cur->NO,cur->cur,cur->name);
		cur = cur ->next;
		}	
	}
	
bool diffest_wp(){//识别到监视点的变化时输出true 否则false	
	WP *cur = head;
	while(cur !=NULL){
		if (cur->cur!=cur->his){
			printf("监视点 %d\t %s\n",cur->NO,cur->name);
			printf("old value : %d\n",cur->his);
			printf("new value : %d\n",cur->cur);
			return true;
			}
		cur=cur->next;
		}	
		return false;
	}
	
void step_wp(){//cpu每一次运行都输出一个监视点的新值
		WP *wp= head;
		while(wp !=NULL){
			if(wp->name[0]=='0'){//读取地址的新数值
				long long addr = strtol(wp->name, NULL, 16);
				wp->his = wp ->cur;
				wp->cur = paddr_read(addr, 4);
				}else {	//获取寄存器的值
					wp->his = wp ->cur;			
					bool *success;
					bool success_ptr = true;
					success = &success_ptr;
			wp ->cur =isa_reg_str2val(wp->name,success);
					}
			wp = wp->next;
			}
			return;

	}
