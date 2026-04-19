/*Need to leave space between name and age when entering values*/

#include <stdio.h>

int main(){
    char name[50];
    int age;

    printf("Enter your value: ");
    scanf("%s %d", name, &age);
    printf("\nYou've entered: %s %d", name, age);
    return 0;
}