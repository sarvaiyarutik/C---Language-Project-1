



#include<stdio.h>

int main(){
   
    float gross,salary,HRA,DA,TA;
     
    printf("Base salary gross : ");
    scanf("%f",&gross);

    printf("Base salary HRA : ");
    scanf("%f",&HRA);

    printf("Base salary DA : ");
    scanf("%f",&DA);

    printf("Base salary TA : ");
    scanf("%f",&TA);

    salary = gross +(gross * HRA / 100) + (gross * DA / 100) + (gross * TA / 100);

    printf("Gross salary : Rs. %.2f",salary);

    return 0;


}