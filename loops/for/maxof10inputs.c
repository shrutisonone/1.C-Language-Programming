#include<stdio.h>
int main()
{
    int i;
    int n;
    int max=0;

    for(i=1;i<=10;i++)
    {
       printf("Enter a number \n");
       scanf("%d",&n);

       if(n>max)
       {
        max=n;
       }
    }
    printf("The maximum value is %d",max);

    return 0;
}