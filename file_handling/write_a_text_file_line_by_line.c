#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void main()
{
    FILE* f1;
    char str[100];
    
    f1=fopen("line.txt","w");

    while(1)
    {
        printf("enter string \n");
        gets(str);
        if(strcmp(str,"exit")==0)
        {
            break;
        }
        fgets(str,100,f1);
        
        fputs(str,f1);
    }
    

    return;
}