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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

//随机数生成器
uint32_t choose(uint32_t n) {  
    return rand() % n;  
}  

// 将符号存入缓冲区  
static void gen(char symbol,int depth) {  
    size_t len = strlen(buf);  
    // 确保缓冲区有足够的空间  
    if (len < sizeof(buf) - 2) { // -2 是因为要留下空间给字符和结束符  
        buf[len] = symbol;  
        buf[len + 1] = '\0'; // 确保字符串以 null 结尾  
    }  
}  

// 随机生成符号  
static void gen_rand_op(int depth) {  
    switch (choose(4)) {  
        case 0: gen('+',depth+1); break;  
        case 1: gen('-',depth+1); break;  
        case 2: gen('*',depth+1); break;  
        default: gen('/',depth+1); break;  
    }  
}  

// 生成随机数字，并将随机数字存入缓冲区  
static void gen_num(int depth) {  
    int num = choose(10);  
    // 确保不生成 0  
    if (num == 0) num = 1;   
    gen(num + '0',depth+1);   
}  

static void gen_rand_expr(int depth) {  
if(depth>=65536) return ;
    switch (choose(3)) {  
        case 0: gen_num(depth); break;  
        case 1: gen('(',depth+1); gen_rand_expr(depth); gen(')',depth+1); break;  
        default:   
            gen_rand_expr(depth);   
            gen_rand_op(depth);   
            gen_rand_expr(depth);   
            break;  
    }  
}  


int main(int argc, char *argv[]) {

  int seed = time(0);
  srand(seed);	
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
  buf[0] = '\0';//初始化
    gen_rand_expr(0);
    /*
if (eval(0,strlen(buf)-1)==-1){
continue;
}
*/
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
