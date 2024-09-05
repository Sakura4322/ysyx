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

#include "sdb.h"


#define NR_WP 32

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
    printf("获取监视点成功,监视点编号为 : %d\n",wp->NO);
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
printf("\t  NO  value\n");
	WP *cur=head;
	while(cur!=NULL){
		printf("存在监视点  %d \t%d \n",cur->NO,cur->cur);
		cur = cur ->next;
		}	
	}
	

