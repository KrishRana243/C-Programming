// Convert characters in a file to uppercase

#include <stdio.h>
#include <ctype.h>

#define FILENAME "Text.txt"

int main() {
    FILE *fp = NULL;
    FILE *fp1 = NULL;
    char ch;

    fp = fopen(FILENAME, "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return -1;
    }

    // create temp file
    fp1 = fopen("Temp.txt", "w");

    if (fp1 == NULL) {
        printf("Error creating temp file\n");
        fclose(fp);
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = toupper(ch);
        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);

    // replace original file
    remove(FILENAME);
    rename("Temp.txt", FILENAME);

    // read and print updated file
    fp = fopen(FILENAME, "r");

    if (fp == NULL)
        return -1;

    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);

    return 0;
}