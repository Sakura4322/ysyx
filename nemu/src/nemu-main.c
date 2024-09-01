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
//char epr[70000];


int main(int argc, char *argv[]) {


  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

FILE *fp = fopen("/home/sakura/ysyx-workbench/nemu/tools/gen-expr/build/input","r");
assert (fp != NULL);
int yes=0,no=0;
while (fgets(buf,sizeof(buf),fp) != NULL){
		char *result = strtok(buf," ");
		char *epr = strchr(buf, ' '); // 找到第一个空格
		/*
		strcpy(epr,eprx);
		int len=strlen(eprx);
		epr [len-1]='\0';
		*/
		printf("%s\n",epr);
		epr++;
		printf("%s\n",epr);
		int num=atoi(result);
		bool success_prt = true;
		bool *success= &success_prt;
		
		 int test_num = (int)expr(epr,success);
		 printf("ans_num = %u \n",num);
		if (num == test_num)yes++;
		else no++;
/*
if (num==test_num)printf("yes\n");
else printf("No\n");
*/
		buf[0]='\0';
		//epr[0]='\0';
	}
	printf ("yes=%d\nno=%d\n",yes ,no);
	fclose(fp);
	
  /* Start engine. */
  engine_start();
  

	
	
  return is_exit_status_bad();
}
