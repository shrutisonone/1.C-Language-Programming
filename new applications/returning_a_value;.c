#include<stdio.h>

int main()
{
    int i;
    int sum();
    int res=sum();
    printf("The sum is %d",res);

    return 0;

}

int  sum()
{
    int i,x;
    int sum=0;

    printf("Ente numbers\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
    }
 
 return sum;

}