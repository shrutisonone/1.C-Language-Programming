//function to delete a record 
#include<stdio.h>
#include"ACCT.h"

void main()
{
    int num;
    FILE *delrec;
    ACCT a;
    
    printf("ACCOUNT NUM\n");
    scanf("%d",&num);
    pos=search(num);
    if(pos==-1)
    {
        printf("File not found \n");
        return;
    }
    fseek(f1,pos,SEEK_SET);
    fread(&a,sizeof(ACCT),1,f1);
    if(a.state==0)
    {
        printf("Record not found\n");
        return;
    }
    a.state=0;
    fseek(f1,pos,SEEK_SET);
    fwrite(&a,sizeof(ACCT),1,f1);

    return;
}