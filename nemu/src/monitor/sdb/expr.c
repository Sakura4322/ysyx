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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
TK_NOTYPE = 256,
TK_EQ,		//等于


/* TODO: Add more token types */
TK_ADDR,	//地址
TK_REG,		//寄存器开头
TK_PLUS,	// 258加号
TK_MINUS,	// 259减号
TK_MULTIPLY,	// 260乘号
TK_DIVIDE,	// 261除号
TK_LPAREN,	// 262左括号
TK_RPAREN,	// 263右括号
TK_VALUE,	//264整数
TK_AND,		//逻辑与
TK_UNEQUAL,	//不等于
DEREF,		//指针解引用
TK_LIBREAK	//换行符


};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"\\$[a-z0-9]+",TK_REG},	//寄存器
  {"\\0x[a-f0-9]+",TK_ADDR},	//地址
  {" +", TK_NOTYPE},    // spaces
  {"\\+",TK_PLUS},         // plus
  {"==", TK_EQ},        // equal
  {"-",TK_MINUS},            //minus
  {"\\*",TK_MULTIPLY},          // mul
  {"/",TK_DIVIDE},            //divide
  {"\\(",TK_LPAREN},
  {"\\)",TK_RPAREN},
  {"[a-zA-Z0-9]+",TK_VALUE},	//所有的字符和数字
  {"\\&&",TK_AND},
  {"\\!=",TK_UNEQUAL},
  {"\n",TK_LIBREAK}
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[65536] __attribute__((used)) = {};

static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {   
 /*
  if (e[position] == '\n'){
  	for (int j=0;j<position;j++){
		printf("%s",tokens[j].str);
		}
		测试点，测试输入的表达式是否正确
		
  	break;
  	}
  */
  	
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
         
        if (substr_len <= 32){         
                    if (rules[i].token_type==TK_NOTYPE){
                    break;
                    	}
                    
                     tokens[nr_token].type=rules[i].token_type;				
                     strncpy(tokens[nr_token].str,substr_start,substr_len);
                     tokens[nr_token].str[substr_len]='\0';
                     
                     printf("nr_token= %d tokens =%s\ntokens_type = %d\n",nr_token,tokens[nr_token].str,tokens[nr_token].type);
                     //测试输入表达式是否正确
				nr_token++;
				
			
                } else {  
                    printf("Error: token array is full.\n");  
                    return false; 
                }         
         
      /*   
        switch (rules[i].token_type) {
          default: TODO();
        }
*/
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
/*
for (int j=0;j<position;j++){
		printf("%s",tokens[j].str);
		}
	*/	
  return true;
}

//括号匹配
static bool check_parenthese(int p, int q) {
printf ("进入括号匹配成功 p = %d q = %d\n",p,q);
	if (tokens[p].type == TK_LPAREN && tokens[q].type == TK_RPAREN) {
		static int pd = 0;
		
		for (int i = p; i <= q; i++) {
			if (tokens[i].type == TK_LPAREN) {
				pd++;
				
				//printf("括号匹配 position = %d len = %d  pd判断= %d\n",i,q,pd);//测试点，测试括号匹配
			} else if (tokens[i].type == TK_RPAREN) {
				pd--;
				
				//printf("括号匹配 position = %d len = %d  pd判断= %d\n",i,q,pd);
			}
			if (pd < 0 || (i == q && pd != 0)) {
			
			assert(0);
				return false ;
			}
			
			if (pd == 0 && i!=q) {
				return false;
			}
			
		}
		return true;
	}
	
	return false;
}

static int sort(int n){//将所有运算符进行优先排序
	if(n==TK_PLUS||n==TK_MINUS)return 4;
	else if(n==TK_MULTIPLY||n==TK_DIVIDE)return 3;
	else if(n==TK_ADDR||n==TK_REG||n==DEREF) return 2;
	else if(n==TK_AND)	return 11;
	else if(n==TK_EQ||n==TK_UNEQUAL)return 7;
	
	return 0;
	}
//找到主运算符
static Token find_op(int p,int q){
printf ("进入find_op函数成功\n");
			int op=-0x3f3f3f3f; //主要运算符的位置
			int ntk=TK_LPAREN; //运算符的种类
			int pd=0;	//括号匹配
			for (int i=p;i<=q;i++){
			if (tokens[i].type==TK_NOTYPE)continue;
				
				if (tokens[i].type!=TK_VALUE){
					
					if (tokens[i].type==TK_LPAREN){
						pd++;
						}else if(tokens[i].type==TK_RPAREN){
							pd--;
							}
					if (pd!=0){
						continue;
						}
					
					if (sort(ntk) < sort(tokens[i].type)){
						ntk=tokens[i].type;
						op=i;
						}
					}
					//只有非数字字符是主运算符
				}
				Token result;
				result.type=ntk;
				char temp[32];
				sprintf(temp,"%d",op);
				strcpy(result.str,temp);
		return  result;
	}
word_t paddr_read(paddr_t addr, int len);
//递归计算表达式
static int eval(int p,int q,bool *success) {
if (*success==false)return 0;
printf ("成功进入eval 函数 p = %d q = %d\n",p,q);
printf ("准备进入括号匹配 p = %d q = %d\n",p,q);
  if (p > q) {
    /* Bad expression */
    *success = false;
    printf("Bad expression");
    return 0;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
     
     //如果输入的是地址，则输出子长为四个字节的该地址的数值
     if(tokens[p].type == TK_ADDR){
     if(tokens[p-1].type == DEREF){
     	long long addr = strtol(tokens[p].str, NULL, 16);
     	int a =(int)paddr_read(addr, 4);
     	printf ("成功读取地址的值 %s = %d\n",tokens[p].str,a);
     	return a;
     	}else {
     	long long ox_num = strtol(tokens[p].str, NULL, 16);
     		printf ("成功读取十六进制数字 %s = %lld\n",tokens[p].str,ox_num);
     		return ox_num;
     		}
     	}
     return atoi(tokens[p].str);
  }
  else if (check_parenthese(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1,success);
  }
  else {
  printf ("成功退出括号匹配 p = %d q = %d\n",p,q);
  printf ("准备进入find_op函数\n");
  Token result=find_op(p,q);
    int op = atoi(result.str);
    int op_type = result.type;
    printf ("退出find_op函数成功 op= %d op_type = %d\n",op,op_type);
 int val1;
 int val2;
	//printf("val1 = %d op = %d val2 = %d\n",val1,op_type,val2); //测试点，计算的元素和符号
	
    switch (op_type) { 
      case TK_PLUS: 
		     val1 = eval(p, op - 1,success);
		     val2 = eval(op + 1, q,success);
		    printf ("计算val成功 val1= %d val2 = %d\n",val1,val2);
		    return val1 + val2;
      case TK_MINUS: 
      			 val1 = eval(p, op - 1,success);
		    	 val2 = eval(op + 1, q,success);
		    	printf ("计算val成功 val1= %d val2 = %d\n",val1,val2);
		    	return val1 - val2;
      case TK_MULTIPLY: 
      			 val1 = eval(p, op - 1,success);
    			 val2 = eval(op + 1, q,success);
    			printf ("计算val成功 val1= %d val2 = %d\n",val1,val2);
    			return val1 * val2;
      case TK_DIVIDE:        	
      			val1 = eval(p, op - 1,success);
    			 val2 = eval(op + 1, q,success);
    			printf ("计算val成功 val1= %d val2 = %d\n",val1,val2);
    			
    			if (val2==0&&op_type==TK_DIVIDE){
				*success = false ;
				printf("DIVISION BY ZERO");
			return 0;
			}
    			return val1 / val2;
    			
      case TK_AND : 
      			val1 = eval(p, op - 1,success);
    			val2 = eval(op + 1, q,success);
    			printf ("计算val成功 val1= %d val2 = %d\n",val1,val2);
      			return val1 && val2;
      			
      case TK_EQ :  
      			val1 = eval(p, op - 1,success);
    			val2 = eval(op + 1, q,success);
    			printf ("计算val成功 val1= %d val2 = %d\n",val1,val2);
    			return (val1 ==val2) ? 1 : 0;
      case TK_UNEQUAL : 
      			val1 = eval(p, op - 1,success);
    			val2 = eval(op + 1, q,success);
    			printf ("计算val成功 val1= %d val2 = %d\n",val1,val2);
    			return (val1 !=val2) ? 1 : 0;
      case TK_REG : 	
      			char *reg = tokens[p].str;
      			reg++;
      			return isa_reg_str2val(reg,success);
      //case TK_ADDR : return 
      case DEREF : return eval(op+1,op+1,success);
      default:assert(0);
    }
  }
  return 0;
}
	
	
word_t expr(char *e, bool *success) {
printf ("成功进入函数epr，进入表达式为 ： %s\n",e);
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
printf ("成功make_tokens\n");

  /* TODO: Insert codes to evaluate the expression. */
  for (int i = 0; i < nr_token; i ++) {
  if (tokens[i].type == TK_MULTIPLY && (i == 0 || tokens[i - 1].type == TK_LPAREN) ) {
    tokens[i].type = DEREF;
    printf("成功是别解引用符");
  } 
}


int p=0,q=nr_token-1;
printf ("准备进入计算 p=%d q=%d\n",p,q);
   int num=eval(p,q,success);
   if (*success==false )return 0;
   printf("Ans = %u\n",num);
   

  return (word_t)num;
}
