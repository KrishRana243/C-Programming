/*File Input and Output*/

#include <stdio.h>

int main() {
    char ch;
    FILE *fp = fopen("Text.txt", "r");
    if (fp == NULL) return 1;

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);
}
