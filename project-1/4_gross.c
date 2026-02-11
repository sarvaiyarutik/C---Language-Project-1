

#include<stdio.h>

int main(){

    float baseSalary,grossSalary,HRA,DA,TA;

    baseSalary = 100;

    HRA = 10;

    DA = 5;

    TA = 8;

    float HraPercentages = 100 * HRA / 100;

    float DaPercentages = 100 * DA / 100;

    float TaPercentages = 100 * TA / 100;

    grossSalary = baseSalary + HraPercentages + DaPercentages + TaPercentages;

    printf("\nGross salary %.2f %f",grossSalary);

    return 0;

}
