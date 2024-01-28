#include<stdio.h>

int pali()
{
    int num;
    int rev;
    int i;
    int dig=0;
    int temp;

    printf("Enter a number ");
    scanf("%d",&num);

    for(i=0;num>0;i++)
    {
        dig=num%10;
        rev=rev*10+dig;
        num=num/10;
    }
    temp=num;
    if(rev==temp)
    {
        return 1;
    }
    
}

void main()
{
    int pali();
    int num;

    if(pali())
    {
       printf("Palindrome \n");
    }
    else
    {
        printf("Not palindrome \n");
    }
}
