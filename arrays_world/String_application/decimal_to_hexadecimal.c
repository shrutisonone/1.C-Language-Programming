#include<stdio.h>
int main()
{
    int i=0;
    int num;
    char str[50];
    int rem;
    char ch;

    printf("Enter a number \n");
    scanf("%d",&num);

    for(i=0;num>0;i++)
    {
        rem=num%16;
        if(rem<10)
        {
           ch=(char)(48+rem);
        }
        else
        {
         ch=(char)(55+rem);
        }
        str[i]=ch;
    }
    if(str[i]=='\0')

    
    return 0;
}