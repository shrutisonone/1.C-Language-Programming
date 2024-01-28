#include<stdio.h>

void main()
{
    int a;
    int *r;

    input(&r);
    display(a);
     
}

void input(int *r)
{
    printf("Enter a New number ");
    scanf("%d",&r);          //stores number in s 
}

void display(int a)
{
    printf("\n Data %d",a);
}