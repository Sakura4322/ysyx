#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)




static char *to_string(char *out,int a){
 char temp[20]="";
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





int printf(const char *fmt, ...) {
va_list args;
va_start(args,fmt);
for(int i =0 ;i<strlen(fmt);i++){
	if(fmt[i]=='%'){
		if(fmt[i+1]=='s'){
			char *temp=va_arg(args,char *);
			for(int j=0;j<strlen(temp);j++){
				putch(temp[j]);
			}
			
		}else if(fmt[i+1]=='d'){
				int temp = va_arg(args,int);
				char out[20];
				to_string(out,temp);
				for(int j=0;j<strlen(out);j++){
					putch(out[j]);
				}
		}
		i++;
	}
	putch(fmt[i]);
}
	va_end(args);
	return 0;
}


int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}





int sprintf(char *out, const char *fmt, ...) {
	memset(out,'\0',strlen(out));
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



int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
