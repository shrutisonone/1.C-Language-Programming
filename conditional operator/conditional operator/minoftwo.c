#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    printf("The minimum number is %d",(a<b)?a:b);

    return 0;
}