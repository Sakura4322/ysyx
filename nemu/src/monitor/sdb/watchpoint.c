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

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  // unit32_t 
} WP;

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

WP* new_wp() {
    // 如果没有空闲的监视点，终止程序
    assert(free_ != NULL);

    // 从空闲链表中取出第一个空闲监视点
    WP* new_wp = free_;
    free_ = free_->next;

    // 初始化新的监视点并将其加入到活跃链表的头部
    new_wp->next = head;
    head = new_wp;

    return new_wp;
}

// 将监视点归还到空闲链表中
void free_wp(WP *wp) {
    // 将监视点从活跃链表中移除
    WP **cur = &head;
    while (*cur != NULL) {
        if (*cur == wp) {
            *cur = wp->next;
            break;
        }
        cur = &(*cur)->next;
    }

    // 将监视点加入到空闲链表的头部
    wp->next = free_;
    free_ = wp;
}
