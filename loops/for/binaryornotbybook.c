#include<stdio.h>
int main()
{
    int n;
    int dig;

    printf("Enter a number \n");
    scanf("%d",&n);

    for(;n>0;n=n/10)
    {
        dig=n%10;
        if(dig>1)
        {
            break;
        }
    }
    if(dig>1)
    {
        printf("Not a binary number \n");
    }
    else
    {
        printf("It is a binary number \n");
    }

    return 0;
}