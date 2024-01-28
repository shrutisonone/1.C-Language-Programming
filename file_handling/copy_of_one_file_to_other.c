#include<stdio.h>

void main()
{
    FILE *f1;
    FILE *f2;
    
    char ch;

    f1=fopen("abc.txt","r");
    f2=fopen("pqr.txt","w");
    
    if(f1==NULL)
    {
        printf("\n File not found\n");
        return;
    }

    while(1)
    {
        ch=fgetc(f1);
        if(feof(f1))
        {
        break;
        }
        fputc(ch,f2);
    }
    fclose(f2);fclose(f1);

    return;
}