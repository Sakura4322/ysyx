#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
	int result=0;
		while(*(s+result)){
	result++;
	}
	return result;
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
	for (int i=0;i<=strlen(src);i++){
		*(dst+i)=*(src+i);	
	}
	return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
	for (int i=0;i<n;i++){
		*(dst+i)=*(src+i);	
	}
	*(dst+n)='\0';
	return dst;
}

char  *strcat(char *dst, const char *src) {
  panic("Not implemented");
	int temp=strlen(dst);
  for(int i=0;i<=strlen(src);i++){
		*(dst+temp+i)=*(src+i);
	}
	return dst;
} 

int strcmp(const char *s1, const char *s2) {
  panic("Not implemented");
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
  panic("Not implemented");
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
	*((char *)s+n)='\0';
	return s;
}

void *memmove(void *dst, const void *src, size_t n) {
if(src<=dst){	
		if(src+n<dst){
	for(int i=0;i<n;i++){
		*((char *)dst+i)=*((char *)src+i);
	
	}
	*((char *)dst+strlen(dst))='\0';
				
		}else{
	for(int i=n-1;i>=0;i--){
		*((char *)dst+i)=*((char *)src+i);
			} 	
		}
	*((char *)dst+strlen(dst))='\0';
	}else {
	for(int i=0;i<n;i++){
		*((char *)dst+i)=*((char *)src+i);
	
	}
	*((char *)dst+strlen(dst))='\0';
	}
return dst;
}
void *memcpy(void *out, const void *in, size_t n) {
	for(int i=0;i<n;i++){
		*((char *)out+i)=*((char *)in+i);	
	}
	*((char *)out+strlen(out))='\0';
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
