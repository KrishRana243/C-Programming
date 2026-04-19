/*Size of Data Types */

#include <stdio.h>

int main(){
    printf("Variables of type char occupy %zu\n", sizeof(char));
    printf("Variables of type int occupy %zu\n", sizeof(int));
    printf("Variables of type float occupy %zu\n", sizeof(float));  
    printf("Variables of type double occupy %zu\n", sizeof(double));
    printf("Variables of type long occupy %zu\n", sizeof(long));
    printf("Variables of type long long occupy %zu\n", sizeof(long long));
    printf("Variables of type long double occupy %zu\n", sizeof(long double));
    printf("Variables of type short occupy %zu\n", sizeof(short));
    return 0;
}

