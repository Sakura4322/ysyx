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

#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
word_t expr(char *e, bool *success);
int is_exit_status_bad();
char buf[70000];


int main(int argc, char *argv[]) {


  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

FILE *fp = fopen("/home/sakura/ysyx-workbench/nemu/tools/gen-expr/build/input","r");
assert (fp != NULL);
while (fgets(buf,sizeof(buf),stdin) != NULL){
		char *result = strtok(buf," ");
		char *epr = strtok(NULL," ");
		int num=atoi(result);
		bool *sucess =false;
		if (num==expr(epr,sucess)){
			printf("Yes!\n");
			}else if(expr(epr,sucess)==-1){
				continue;
				}else {
					printf("Np!\n");
					}
					
		buf[0]='\0';
	}
	
	fclose(fp);
	
  /* Start engine. */
  engine_start();
  

	
	
  return is_exit_status_bad();
}
