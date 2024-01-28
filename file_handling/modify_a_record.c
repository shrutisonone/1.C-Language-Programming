#include<stdio.h>
#include<stdlib.h>
#include"ACCT.h"

void main()
{
   int num;
   int pos;
   ACCT a;
   FILE *f1;
    f1=fopen("ACCTREC.txt","w");
    printf("Enter account number \n");
    scanf("%d",&num);
   pos=search(num);
   if(pos=-1)
   {
    printf("Account not present \n");
   }
   else
   {
     fseek(f1,pos,SEEK_SET);
     fread(&a,sizeof(ACCT),1,f1);
     if(a.state==0)
     {
        printf("Can't modify the record \n");
     }
   }
   update(&a,num);
   fseek(f1,pos,SEEK_SET);
   fwrite(&a,sizeof(ACCT),1,f1);

   return;
}