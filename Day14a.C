/*Pointer Arithmetic & Constant Char*/
#include <stdio.h>

int stringLength (const char *string);

int main(){
    printf("%d \n",stringLength("string length test"));
    printf("%d \n",stringLength(""));
    printf("%d \n",stringLength("Krish"));

    return 0;
}

int stringLength (const char *string)
{
    const char *lastAddress = string;

    while(*lastAddress)
        ++lastAddress;

    return lastAddress - string;
}
