#include<stdio.h>
#include<string.h>

int main()
{
int i=0;
int num;
int dig=0;
char str[100];

printf("Enter the integer string \n");
gets(str);

while(str[i]!='\0')
{
    if(str[i]>=49 && str[i]<=57)
    {
        dig=str[i]-48;
        num=num*10+dig;
    }
    else
    {
        break;
    }
    i++;
}

if(str[i]=='\0')
{
    printf("Decimal number is %d",num);
}
    return 0;
}