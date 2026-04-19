/*Searching in Strings*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Doubt kills dreams more than Failure ever wiil.";
    char ch = 'F';
    char *a = NULL;

    char text[] = "You only Fail when you stop Trying.";
    char word[] = "Fail";
    char *b = NULL;

    a = strchr(str,ch);
    printf("Character: %c\n", *a);
    printf("Substring: %s\n", a);
    printf("Address (pointer): %p\n", &a);
    printf("%p  %p\n\n",&str,&a);

    b = strstr(text,word);
    printf("%s",b);
    return 0;
}