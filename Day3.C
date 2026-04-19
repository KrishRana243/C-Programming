/* scanf() function is used to take input from the user. 
It is a part of the standard input/output library in C. */ 

#include <stdio.h>

int main() {
    char name[50];
    int age;
    
    printf("What is your name? ");
    scanf("%s", name);
    printf("How old are you? ");
    scanf("%d", &age);
    printf("Hello %s, you are %d years old!", name, age);
    return 0;
}