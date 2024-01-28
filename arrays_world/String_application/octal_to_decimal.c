#include<stdio.h>
#include<string.h>
int main()
{
    int num;
    int i;
    char str[100];
    int mf=1;
    int dig;

    printf("Enter a octal string \n");
    gets(str);

    i=strlen(str)-1;
    
    for(;i>=0;i--)
    {
        if(str[i]>='0' && str[i]<='7')
        {
            dig=str[i]-48;
            num=num+dig*mf;
            mf=mf*8;        
        }
        else
        {
            break;
        }

    }
    if(i==-1)
    {
        printf("number is %d\n",num);
    }
    else
    {
        printf("invalid input\n");
    }

    return 0;
}