#include<stdio.h>

int main()
{
    void table();    //declareing function
    table();


    return 0;
}

void table()
{
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    int i;
    for(i=1;i<=10;i++)
    {
        printf(" %d\tx\t %d\t= %d \n",num,i,num*i);
    }
}

