

#include<stdio.h>

int main(){
     
    float program,converts;

     printf("\nThe temparcher in celsius :");

     scanf("%f",&program);

     converts = (9.0/5.0 * program ) + 32;

     printf("The temperature in fahrenheit = %.1f",converts);

    return 0;
}