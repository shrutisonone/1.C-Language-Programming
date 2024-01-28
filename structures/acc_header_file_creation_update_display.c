#include<stdio.h>
#include"ACCT.h"

void update(ACCT *a,int num)
{
    a->accnum=num;
    printf("Account Name\n");
    scanf("%d",a->accname);
    do
    {
        printf("Account opening amount \n");
        scanf("%d",&a->opnbal);
        if(a->opnbal>=500)
        {
            break;
        }
    }while(1);
}

void display(ACCT a)
{
    printf("Account number  %d",a.accnum);
    printf("Account name %s",a.accname);
    printf("Account opening balance %d",a.opnbal);
    return;
}