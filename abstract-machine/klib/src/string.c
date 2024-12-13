#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
	int result=0;
		while(*(s+result)!='\0'){
	result++;
	}
	return result;
}

char *strcpy(char *dst, const char *src) {
	int temp=strlen(src);
	for (int i=0;i<=temp;i++){
		*(dst+i)=*(src+i);	
	}
	return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
	for (int i=0;i<n;i++){
		*(dst+i)=*(src+i);	
	}
	return dst;
}

char  *strcat(char *dst, const char *src) {
	int temp=strlen(dst);
	int temp_2=strlen(src);

  for(int i=0;i<=temp_2;i++){
		*(dst+temp+i)=*(src+i);
	}
	return dst;
} 

int strcmp(const char *s1, const char *s2) {
	int i =0;
  while (s1||s2){
		if(*(s1+i)>*(s2+i)){
		return 1;
		}
		if(*(s1+i)<*(s2+i)){
		return -1;
		}
			i++;
	}
		return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
	for(int i=0;i<n;i++){
		if(*(s1+i)>*(s2+i)){
		return 1;
		}
		if(*(s1+i)<*(s2+i)){
		return -1;
		}
	}
	return 0;
}

void *memset(void *s, int c, size_t n) {
	for(int i=0;i<n;i++){
	*((char *)s+i)=c;	
	}
	return s;
}

void *memmove(void *dst, const void *src, size_t n) {
if(src<=dst){	
		if(src+n<dst){
	for(int i=0;i<n;i++){
		*((char *)dst+i)=*((char *)src+i);
	
	}
				
		}else{
	for(int i=n-1;i>=0;i--){
		*((char *)dst+i)=*((char *)src+i);
			} 	
		}
	}else {
	for(int i=0;i<n;i++){
		*((char *)dst+i)=*((char *)src+i);
	
	}
	}
return dst;
}
void *memcpy(void *out, const void *in, size_t n) {
	for(int i=0;i<n;i++){
		*((char *)out+i)=*((char *)in+i);	
	}
	return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
for(int i=0;i<n;i++){
	if(*((char *)s1+i)<*((char *)s2+i)){
	return -1;	
	}	
	if(*((char *)s1+i)>*((char *)s2+i)){
	return 1;	
	}	
}
	return 0;
}


#endif
