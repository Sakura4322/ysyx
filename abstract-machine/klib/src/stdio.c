#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)


extern int min(int a ,int b ); 
extern void putch(char ch);

static char *to_string(char *out,int a){
 char temp[20]="";
 int i=0;
int negetive=(a<0);

 if(negetive){
	out[0]='-';
	a=-a;
 }

 do{
		temp[i++]=a%10+'0';
		a/=10;
 }while(a>0);

for(int j=0;j<i;j++){
		*(out+negetive+j)=*(temp+i-j-1);
	}

out[i+1]='\0';
return out;
}



// void decimalToHex(int decimal, char *hexString) {
//     char hexDigits[] = "0123456789ABCDEF";  // 十六进制数字表
//     int index = 0;

//     // 处理负数
//     if (decimal < 0) {
//         hexString[index++] = '-';
//         decimal = -decimal;
//     }

//     // 将十进制数转换为十六进制
//     int remainder;
//     char hexResult[10] = {0};  // 临时存储十六进制结果
//     int pos = 0;

//     do {
//         remainder = decimal % 16;
//         hexResult[pos++] = hexDigits[remainder];
//         decimal /= 16;
//     } while (decimal > 0);

//     // 反转字符串
//     for (int i = 0; i < pos; i++) {
//         hexString[index++] = hexResult[pos - i - 1];
//     }

//     hexString[index] = '\0';  // 添加字符串结束符
// }

// void floatToString(float num, char *str, int precision) {
//     // 处理负数
//     int isNegative = 0;
//     if (num < 0) {
//         isNegative = 1;
//         num = -num;
//     }

//     // 分离整数部分和小数部分
//     int integerPart = (int)num;
//     float decimalPart = num - integerPart;

//     // 将整数部分转换为字符串
//     int index = 0;
//     if (isNegative) {
//         str[index++] = '-';
//     }
//     int temp = integerPart;
//     if (temp == 0) {
//         str[index++] = '0';
//     } else {
//         while (temp > 0) {
//             str[index++] = (temp % 10) + '0';
//             temp /= 10;
//         }
//     }
//     // 反转整数部分字符串
//     for (int i = 0; i < index / 2; i++) {
//         char temp = str[i];
//         str[i] = str[index - i - 1];
//         str[index - i - 1] = temp;
//     }

//     // 添加小数点
//     str[index++] = '.';

//     // 将小数部分转换为字符串
//     for (int i = 0; i < precision; i++) {
//         decimalPart *= 10;
//         int digit = (int)decimalPart;
//         str[index++] = digit + '0';
//         decimalPart -= digit;
//     }

//     // 添加字符串结束符
//     str[index] = '\0';
// }




// int printf(const char *fmt, ...) {

// va_list args;
// va_start(args,fmt);
// int len_fmt=strlen(fmt);
// for(int i =0 ;i<len_fmt;i++){
// 	if(fmt[i]=='%'){
// 		if(fmt[i+1]=='%'){
// 			putch('%');
// 		}else {
// 			int j =0;
// 			char symbols[10]="";
// 			while(fmt[i+j+1]=='s'||fmt[i+j+1]=='d'||fmt[i+j+1]=='x'||fmt[i+j+1]=='f'){
// 				symbols[j]=fmt[i+j+1];
// 				j++;
// 			}
// 			i+=j;
// 			symbols[j]='\0';
// 			char *ptr = symbols;
// 			char flags,precision;
// 			int width,lenth;

// 			if(*ptr>'0'&&*ptr<='9'){
// 				flags=' ';
// 			}else{
// 				flags=*ptr;
// 				ptr++;
// 			}

// 			for(int k=0;k<j-1;k++){		//pd precision and parse width
// 				if(ptr[k]=='.'){
// 					precision='.';
// 					ptr+=k;
// 					break;
// 				}else{
// 					width=width*10+(ptr[k]-'0');
// 				}
// 			}

// 			if(precision=='.'){
// 				int k =0;
// 				while(*ptr>='0'&&*ptr<=9){
// 					lenth=lenth*10+(ptr[k]-'0');
// 					k++;
// 				}
// 			}


// 			if(fmt[i+1]=='s'){
// 				char *temp=va_arg(args,char *);
// 				int len_out = strlen(temp);
// 				if(flags==' '||flags=='0'){
// 					for(int k=0;k<width-len_out;k++){
// 						putch(flags);
// 					}
// 				}

// 				if(precision=='.'){
// 					for(int k=0;k<min(len_out,lenth);k++){
// 						putch(temp[k]);
// 					}
// 				}else {
// 					for(int k=0;k<len_out;k++){
// 						putch(temp[k]);
// 					}
// 				}

// 				if(flags=='-'){
// 					for(int k=0;k<width-len_out;k++){
// 						putch(flags);
// 					}
// 				}
				
				
// 			}else if(fmt[i+1]=='d'){
// 					int temp = va_arg(args,int);
// 					char out[20];
// 					to_string(out,temp);
// 				int	len_out = strlen(out);


// 				if(flags==' '||flags=='0'){
// 					for(int k=0;k<width-len_out;k++){
// 						putch(flags);
// 					}
// 				}


// 					for(int k=0;k<len_out;k++){
// 						putch(out[k]);
// 					}


// 				if(flags=='-'){
// 					for(int k=0;k<width-len_out;k++){
// 						putch(flags);
// 					}
// 				}


// 			}else if(fmt[i+1]=='x'){
// 				int num = va_arg(args,int);
// 				char hexString[10]="";
// 				decimalToHex(num, hexString);
// 				int len_out=strlen(hexString);

// 				if(flags==' '||flags=='0'){
// 					for(int k=0;k<width-len_out;k++){
// 						putch(flags);
// 					}
// 				}


// 					for(int k=0;k<len_out;k++){
// 						putch(hexString[k]);
// 					}


// 				if(flags=='-'){
// 					for(int k=0;k<width-len_out;k++){
// 						putch(flags);
// 					}
// 				}


	
// 			}else if(fmt[i+1]=='f'){
// 				float num = va_arg(args,double);

// 				if(precision!='.'){
// 					width = 6;
// 				}

// 				char floatString[50];
// 				floatToString(num, floatString, width);
// 				int len_out = strlen(floatString);

// 				if(flags==' '||flags=='0'){
// 					for(int k=0;k<width-len_out;k++){
// 						putch(flags);
// 					}
// 				}


// 					for(int k=0;k<len_out;k++){
// 						putch(floatString[k]);
// 					}


// 				if(flags=='-'){
// 					for(int k=0;k<width-len_out;k++){
// 						putch(flags);
// 					}
// 				}
	
// 			}
// 		}
// 		i++;
// 	}else {
// 		putch(fmt[i]);
// 	}
// }
// 	va_end(args);
// 	return 0;
// }




int vsprintf(char *out, const char *fmt, va_list ap) {

	int i=0;
	int end=strlen(fmt);
	for( i=0; i<end;  i++){
	if (*(fmt+i)=='%') {
			char temp=*(fmt+i+1);
			if(temp=='s'){ 
				strcat(out,va_arg(ap,char *));
			}else if(temp=='d'){
				int num=va_arg(ap,int);
				char temp_str[20]="";
				to_string(temp_str,num);
				strcat(out,temp_str);
			}else if(temp=='c'){
				char ch =va_arg(ap,int);
				char temp[2];
				temp[0]=ch;
				temp[1]='\0';
				strcat(out,temp);
			}
			i++;
	}	else{
		int ind_out=strlen(out);
	*(out+ind_out)=*(fmt+i);	
	}
	}

	int ind_out=strlen(out);
	out[ind_out]='\0';
	return 0;
}





int sprintf(char *out, const char *fmt, ...) {
va_list args;
va_start(args,fmt);
int i=0;
int end=strlen(fmt);
for( i=0; i<end;  i++){
if (*(fmt+i)=='%') {
		char temp=*(fmt+i+1);
		if(temp=='s'){ 
			strcat(out,va_arg(args,char *));
		}else if(temp=='d'){
			int num=va_arg(args,int);
			char temp_str[20]="";
			to_string(temp_str,num);
			strcat(out,temp_str);
		}else if(temp=='c'){
			char ch =va_arg(args,int);
			char temp[2];
			temp[0]=ch;
			temp[1]='\0';
			strcat(out,temp);
		}
		i++;
}	else{
	int ind_out=strlen(out);
*(out+ind_out)=*(fmt+i);	
}
}
int ind_out=strlen(out);
out[ind_out]='\0';
va_end(args);

return 0;
}

int printf(const char *fmt, ...){
	char out[20000]="";
	va_list args;
	va_start(args,fmt);
	vsprintf(out, fmt, args);
	int len=strlen(out);
	for(int i=0;i<len;i++){
		putch(out[i]);
	}
	va_end(args);
	return 0;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
