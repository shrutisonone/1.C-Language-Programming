#include<stdio.h>

void main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    if(num&32)
    {
        printf("ONN\n");
    }
    else
    {
        printf("OFFF\n");
    }
    return;
}