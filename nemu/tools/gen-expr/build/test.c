#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("/home/sakura/ysyx-workbench/nemu/tools/gen-expr/build/input", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char buffer[256];
    fgets(buffer, sizeof(buffer), fp);
    fgets(buffer, sizeof(buffer), fp);
    for(int i =0;i<strlen(buffer);i++){
        printf("%c\n", buffer[i]);
        }
        printf("%s",buffer);
    

    fclose(fp);
    return 0;
}

