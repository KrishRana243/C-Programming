/*Structures*/
#include <stdio.h>

struct employee {
    char name[30];
    char date[15];
    float salary;
};

int main(){
    struct employee emp = {"Mike","19/04/26",76909.00f};
    printf("\nName: %s",emp.name);
    printf("\nHire Date: %s",emp.date);
    printf("\nSalary: %.2f\n",emp.salary);

    printf("Enter employee information: \n");

    printf("Name: ");
    scanf("%s",emp.name);

    printf("\nHire Date: ");
    scanf("%s",emp.date);

    printf("\nSalary: ");
    scanf("%f",&emp.salary);

    
}