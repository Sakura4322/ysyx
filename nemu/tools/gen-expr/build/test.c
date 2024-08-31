#include <stdio.h>

int main() {
    FILE *fp = fopen("/home/sakura/ysyx-workbench/nemu/tools/gen-expr/build/input", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}

