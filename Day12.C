/*Pointer*/
#include <stdio.h>

int main(){
    int num = 150;
    int *pnum = NULL;

    pnum = &num;

    printf("num address is: %p\n", &num);
    printf("Address of pnum: %p\n",&pnum);
    printf("Value of pnum: %p\n", pnum);
    printf("Value of what pnum is pointing to: %d",*pnum);

    return 0;
}