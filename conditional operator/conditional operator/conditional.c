#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d",&a);
    printf(" The number entered %d is %s",a,(a%2==0)?"Even":"Odd");
}