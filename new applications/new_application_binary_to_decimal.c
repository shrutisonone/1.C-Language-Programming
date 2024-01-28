#include<stdio.h>
#include<string.h>

int main()
{
int i=0;
int num=0;
int dig=0;
char str[100];
int mf=1;

printf("Enter the binary string \n");
gets(str);

i=strlen(str)-1; 
printf("i is %d",i);        //5-1=4

while(i>=0)              
{
    if(str[i]=='0' || str[i]=='1')  
    {
        printf("\ncase is [%d]\n",i);
        dig=str[i]-48;
        printf("dig=%d \n",dig);
        num=num+dig*mf;
        printf("number =%d\n",num);
        mf=mf*2;
        printf("mf is %d\n",mf);
        i--;
    }
}

if(i==-1)
{
    printf("Decimal number is %d",num);
}
    return 0;
}