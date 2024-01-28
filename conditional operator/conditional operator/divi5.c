#include<stdio.h>

int main()
{
    int a;
    printf("Enter a  number \n");
    scanf("%d",&a);
    printf("The number %d is %s",a,(a%5==0)?"Divisible by 5":"Not Divisible by 5");

    return 0;
}