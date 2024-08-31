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
TK_EQ,

/* TODO: Add more token types */
TK_PLUS, // 加号
TK_MINUS, // 减号
TK_MULTIPLY, // 乘号
TK_DIVIDE, // 除号
TK_LPAREN, // 左括号
TK_RPAREN, // 右括号
TK_VALUE,  //整数
TK_AND,
TK_SMALLER,
TK_BIGGER,
TK_UNEQUAL,
DEREF		//指针解引用
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+",TK_PLUS},         // plus
  {"==", TK_EQ},        // equal
  {"-",TK_MINUS},            //minus
  {"\\*",TK_MULTIPLY},          // mul
  {"/",TK_DIVIDE},            //divide
  {"\\(",TK_LPAREN},
  {"\\)",TK_RPAREN},
  {"[0-9]+",TK_VALUE},
  {"\\&&",TK_AND},
  {"\\<=",TK_SMALLER},
  {"\\>=",TK_BIGGER},
  {"\\!=",TK_UNEQUAL}
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

  while (e[position] != '\0'||e[position] != '\n') {   
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
         
         
        if (substr_len <= 32) 										{ 																																		  
                    tokens[nr_token].type=rules[i].token_type;
				strncpy(tokens[nr_token].str,substr_start,substr_len);
				nr_token++;
			
                } else {  
                    printf("Error: token array is full.\n");  
                    return false; 
                }  
         //当tokens长度小于32位才开始录入，如果是非数字字符类型，就只录入类型，否则再录入数值
         
         
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
      printf("damn%ddamn\n",e[position]);
      return false;
    }
  }
for (int j=0;j<position;j++){
		printf("%s",tokens[j].str);
		}
  return true;
}

//括号匹配
static bool check_parenthese(int p, int q) {
	if (tokens[p].type == TK_LPAREN && tokens[q].type == TK_RPAREN) {
		static int pd = 0;
		// l = 0, r = 0;
		for (int i = p; i <= q; i++) {
			if (tokens[i].type == TK_LPAREN) {
				pd++;
				//l = i;
			} else if (tokens[i].type == TK_RPAREN) {
				pd--;
				//r = i;
			}
			if (pd < 0 || (i == q && pd != 0)) {
				return false ;
			}
			/*
			if (pd == 0 && l > p && r < q) {
				if (!check_parenthese(l, r)) {
					return false;
				}
			}
			*/
		}
		return true;
	}
	
	return false;
}


//找到主运算符

static Token find_op(int p,int q){
			int op=0x3f3f3f3f;
			int ntk=512;
			int pd=0;
			for (int i=p;i<q;i++){
				if (tokens[i].type!=TK_VALUE){
					
					if (tokens[i].type==TK_LPAREN){
						pd++;
						}else if(tokens[i].type==TK_RPAREN){
							pd--;
							}
					if (pd!=0){
						continue;
						}
					//括号内的不可能是主运算符，直接跳过
					
					
					if (tokens[i].type/2 < ntk/2){
						ntk=tokens[i].type;
						op=i;
						}else if(tokens[i].type/2 == ntk/2&&op<i){
						op=i;	
							}
					//token_type不同时，选择数值更小的token
					//+-，*/相同用于是要除以2
					//token_type相同时，越晚结合优先级越低
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

//递归计算表达式
static int eval(int p,int q) {
  if (p > q) {
    /* Bad expression */
    return -1;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
     return atoi(tokens[p].str);
  }
  else if (check_parenthese(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
  Token result=find_op(p,q);
    int op = atoi(result.str);
    int op_type = result.type;
    int val1 = eval(p, op - 1);
    int val2 = eval(op + 1, q);
if (val2==0&&op_type==TK_DIVIDE){
printf("DIVISION BY ZERO");
return -1;	
	}
    switch (op_type) {
      case TK_PLUS: return val1 + val2;
      case TK_MINUS: return val1 - val2;
      case TK_MULTIPLY: return val1 * val2;
      case TK_DIVIDE: return val1 / val2;
      default: assert(0);
    }
  }
  return 0;
}
	
	
word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }


  /* TODO: Insert codes to evaluate the expression. */
   int p=0,q=nr_token;
   int num=eval(p,q);
   printf("%d",num);
  
  /*
  for (i = 0; i < nr_token; i ++) {
  if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == certain type) ) {
    tokens[i].type = DEREF;
  } 
}
  */
  TODO();

  return 0;
}
