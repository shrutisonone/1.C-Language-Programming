#include<stdio.h>
#include"ACCT.h"

void add()
{
    int num;
    int pos;
    ACCT a;
    FILE *f1;
    printf("Enter a account number \n");
    scanf("%d",&num);
    pos=search(num);
    if(pos>=0)
    {
        printf("Record Exists\n");
    }
    else
    {
      update(&a,num);
      fwrite(&a,sizeof(ACCT),1,f1);
    }
    return;
}