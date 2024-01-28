#include<stdio.h>
int main()
{
int num;
int dig=0;

printf("Enter a number \n");
scanf("%d",&num);

for(;dig=num%10;)
{
    if(dig>1)
    {
        break;
    }
    num=num/10;
}

if(dig>1)
{
    printf("it is not  a binary number \n");
}
else
{
    printf("It is a binary number \n");
}
return 0;
}