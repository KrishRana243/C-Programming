#include <stdio.h>

int stringLength (const char *string);

int main(){
    stringLength("Dream Big. Work Hard. Stay Humble.");
    printf("\n");
    stringLength("Krish");
    return 0;
}

int stringLength (const char *string)
{
    const char *ptr = string;

    printf("Character addresses:\n");

    while(*ptr){
        printf("%c -> %p\n", *ptr, (void*)ptr); 
        ptr++;
    }

    // %p (used to print memory addresses) expects a void* argument but will also work with ptr
    printf("Last address (null terminator): %p\n", (void*)ptr);

    return ptr - string;
}