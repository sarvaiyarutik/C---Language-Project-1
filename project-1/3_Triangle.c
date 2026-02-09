

#include<stdio.h>

int main(){
     
    int first,second,third;

    printf("first triangle :");
    scanf("%d",&first);

    printf("second triangle :");
    scanf("%d",&second);

    third = 180 - (first + second);

    printf("Third angle = %d ",third);

    return 0;
}