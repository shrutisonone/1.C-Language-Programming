#include<stdio.h>

int oddeven()
{
    int num;

    printf("Enter a number \n");
    scanf("%d",&num);
    int res=(num%2);

    return res;
}

void main()
{
    int oddeven();
    if(oddeven()==0)
    {
        printf("Even \n");

    }
    else
    {
        printf("Odd\n");
    }
    
}