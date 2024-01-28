#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char str[100];
    int num=0;
    int dig;
    int mf=1;

    printf("Enter a binary number  \n");
    gets(str);  
    printf("The binary number input is ");
    puts(str);    //576
  
    i=strlen(str)-1;

    for(i=0;i>=0;i--)
    {
       if(str[i]>=48 && str[i]<=57)
       {
        dig=str[i]-48;   //5-48
        num=num+dig*mf;
        mf=mf*2;
       }
       else
       {
        break;
       }
    }   
    if(i==-1)
    {
        printf("Number is %d \n",num);
    }
    else
    {
        printf("Invalid Input \n");
    }

    return 0;
}