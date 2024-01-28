#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char str[100];
    int dig;
    int num=0;
    int mf=1;

    printf("Enter the hex string \n");
    gets(str);
    printf("The input hex string is ");
    puts(str);

    i=strlen(str)-1;

    for(i=0;i>=0;i--)
    {
       if(str[i]>='a' && str[i]<='f') 
       {
        dig=str[i]-55;   
       }
       else if(str[i]>=48 && str[i]<=57)
       {
        dig=str[i]-48;
       }
       else 
       {
         break;
       }
       num=num+dig*mf;
       mf=mf*6;
    }   
    if(str[i]==-1)
    {
        printf("Number is %d \n",num);
    }
    else
    {
        printf("Invalid Input \n");
    }


    return 0;
}