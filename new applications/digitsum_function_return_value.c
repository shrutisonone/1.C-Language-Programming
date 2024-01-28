#include<stdio.h>

int digsum()
{
    int i;
    int dig;
    int sum=0;
    int num;

    printf("Enter a number \n");
    scanf("%d",&num);

    for(i=0;num>0;i++)
    {
        dig=num%10;
        sum=sum+dig;
        num=num/10;
    }
    return sum;
}

void main()
{
    int digsum();
    printf("The digit sum is %d",digsum());
}