






#include<stdio.h>

int main(){
    float baseSalary, grossSalary,HRA,DA,TA ;

    printf("Base salary :");
    scanf("%f",&baseSalary);

    printf("Enter your HRA :");
    scanf("%f",&HRA);

    printf("Enter your DA : ");
    scanf("%f",&DA);

    printf("Enter your TA :");
    scanf("%f",&TA);


    grossSalary = baseSalary + (baseSalary * HRA/100) + (baseSalary * DA / 100 ) + (baseSalary * TA / 100);


    printf("Gross Salary : Rs %.1f", grossSalary);

    return 0;
}

