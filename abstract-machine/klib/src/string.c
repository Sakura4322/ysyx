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

int min(int a ,int b){
if (a>b) return b ;
return a;
}
int strcmp(const char *s1, const char *s2) {
	int temp1=strlen(s1);
	int temp2=strlen(s2);
	for (int i=0;i<min(temp1,temp2);i++){	
		if(*(s1+i)>*(s2+i)){
		return 1;
		}
		if(*(s1+i)<*(s2+i)){
		return -1;
	
	}

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
    // 如果 src 和 dst 重叠，且 src 在 dst 后面，按照从后往前拷贝
    if (src < dst && src + n > dst) {
        // 从后往前拷贝
        for (size_t i = n; i > 0; i--) {
            *((char *)dst + i - 1) = *((char *)src + i - 1);
        }
    } else {
        // 没有重叠或 src 在 dst 之前，按正常顺序从前往后拷贝
        for (size_t i = 0; i < n; i++) {
            *((char *)dst + i) = *((char *)src + i);
        }
    }
    return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
if (out == NULL || in == NULL) {
        return NULL; // 可以处理空指针的情况
    }
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
