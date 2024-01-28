#include<stdio.h>

void main()
{
    FILE* f1;
    char str[100];
    
    f1=fopen("line.txt","r");
    if(f1==NULL)
        {
            printf("File not found\n");
        }

    while(1)
    {
        printf("enter string \n");
        gets(str);
        if(feof(f1))
        {
            break;
        }
    }

    feof(f1);
    puts(str);

    return;
}