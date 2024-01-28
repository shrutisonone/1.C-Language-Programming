#include<stdio.h>
#include<string.h>

int main()
{
    int i=0;
    int j;
    int num;
    int dig;
    char str[100];
    char ch;
    char p[100];
    char q[100];

    printf("Enter a number \n");
    scanf("%d",&num);

    for(i=0;num>0;i++)
    {
        dig=num%10;
        ch=(char)(48+dig);
        p[i]=ch;
        num/=10;
    }
    strrev(p);
    puts(p);
    return 0;
}