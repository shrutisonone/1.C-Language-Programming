#include<stdio.h>

void main()
{
    FILE *f1;
    char ch;
    f1=fopen("abc.txt","w");


    pritnf("Type character \n");
    while(1)
    {
        scanf("%c",&ch);
        if(ch=='*')
        {
            break;
        }
        else
        {
            putc(ch,f1);
        }
    }
    fclose(f1);
    return;
}