#include <stdio.h>
#include <stdlib.h>
int main(){
	int ret = system("gcc -Werror cfile.c -o cfile");
	printf("ret = %d " , ret);
return 0;	
}
