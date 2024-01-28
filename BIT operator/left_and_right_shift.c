#include<stdio.h>

void main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    
    num=num<<2;
    printf(" Left shift is %d \n",num);
    num=num>>2;
    printf("Right Shift is %d",num);
    return;
}