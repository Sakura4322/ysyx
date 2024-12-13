#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {

  panic("Not implemented");
}


int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}


char *to_string(char *out,int a){
 char temp[20];
 int i=0;
 while (a>0){
		temp[i++]=a%10+'0';
		a/=10;
 }
for(int j=0;j<i;j++){
		*(out+j)=*(temp+i-j-1);
	}
out[i]='\0';
return out;
}


int sprintf(char *out, const char *fmt, ...) {
va_list args;
va_start(args,fmt);
for(int i=0;i<strlen(fmt);i++){
if (*(fmt+i)=='%'){
		char temp=*(fmt+i+1);
		if(temp=='s'){
			strcat(out,va_arg(args,char *));
		}else if(temp=='d'){
			int num=va_arg(args,int);
			char temp_str[20];
			strcat(out,to_string(temp_str,num));
		}
		i++;
}	else{
*(out+i)=*(fmt+i);	
}
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
