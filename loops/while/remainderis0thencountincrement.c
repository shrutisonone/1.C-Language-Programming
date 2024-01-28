#include<stdio.h>

int main()
{
    int n;
    int count=0;

    printf("Enter a number \n");
    scanf("%d",&n);
    while(n>0)
    {
        if(n%2==0);
        count++;
    }
    printf("the count of number is %d",count);

    return 0;
}