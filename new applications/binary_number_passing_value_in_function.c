#include<stdio.h>

int isbinar(num)
{
    int i;
    int num;

    printf("Enter a binary number \n");
    scanf("%d",&num);

    while(num>0)
    {
        if(num%10>1)
        {
            break;
        }
       num=num/10; 
    }
    
    return(num==0);
}

void main()
{
    int isbinar(); 
    int res;
    int x;

    res=isbinar(x);
    if(res==0)
    {
        printf("Not a binary number \n");
    }
    else
    {
        printf("A Binary number \n");
    }
}