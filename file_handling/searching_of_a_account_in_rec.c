//searching of an account in record

#include<stdio.h>
#include<stdlib.h>
#include"ACCT.h"

int search(int num)
{
    ACCT a;
    int pos=0;
    FILE *f1;

    fseek(f1,0,SEEK_SET);

    while(1)
    {
        fread(&a,sizeof(ACCT),1,f1);
        if(feof(f1))
        {
          pos=1;
          break;
        }
        pos=ftell(f1);
        
    }
return pos;
}