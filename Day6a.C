// Converting minutes to years

#include <stdio.h>

int main(){
    int minutesEntered = 0;
    double years = 0;
    double days = 0;
    double minutesInYear = 0;

    printf("Please enter the number of minutes: ");
    scanf("%d", &minutesEntered);

    minutesInYear = 365 * 24 * 60; //525,600 minutes in a year
    years = minutesEntered / minutesInYear;
    days = (minutesEntered / 60.0) / 24.0; //1440 minutes in a day

    printf("%d minutes is approximately %f years or %f days.\n", minutesEntered, years, days);
    return 0;
}