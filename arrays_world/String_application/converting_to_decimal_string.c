#include<stdio.h>

int main()
{
    int i;
    char str[100];
    int num=0;
    int dig;

    printf("Enter a string \n");
    gets(str);  
    printf("The string insered is ");
    puts(str);    //576

    for(i=0;str[i]!='\0';i++)
    {
       if(str[i]>=48 && str[i]<=57)
       {
        dig=str[i]-48;   //5-48
        num=num*10+dig;
       }
       else
       {
        break;
       }
    }   
    if(str[i]=='\0')
    {
        printf("Number is %d \n",num);
    }
    else
    {
        printf("Invalid Input \n");
    }

    return 0;
}