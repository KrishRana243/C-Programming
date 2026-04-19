// Weather Program

#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main(){
    //initialize rainfall data for years 2021 - 2025
    float rain[YEARS][MONTHS] = 
    {
        {2.7,3.2,1.1,0.0,2.6,4.0,4.3,1.9,6.0,1.3,0.6,0.0},
        {0.2,5.1,4.4,3.7,2.4,0.0,0.0,8.0,2.0,3.5,7.5,1.0},
        {4.0,0.9,1.8,5.9,8.0,2.3,2.1,2.8,3.0,0.0,0.0,4.7},
        {7.2,9.9,8.4,3.1,2.5,1.2,0.8,1.7,0.5,5.0,4.3,6.2},
        {5.6,3.1,4.9,9.9,8.2,4.3,1.0,1.3,5.8,8.4,7.2,6.4}
    };

    int year,month;
    float subtotal, total;

    printf("YEAR\t\tRAINFALL (inches)\n");

    for (year = 0, total = 0; year < YEARS; year++){
        for (month = 0, subtotal = 0; month < MONTHS; month++){
            subtotal += rain[year][month];
        }
        printf("%d\t\t%10.1f\n", 2021 + year, subtotal);
        total += subtotal;
    }

    printf("\nThe yearly average is %.1f inches.\n", total/YEARS);
    return 0;
}
