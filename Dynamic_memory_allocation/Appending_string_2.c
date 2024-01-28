#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    char a[40];
    char b[50];
    char *c;
    int n;
    int i;
   
    printf("Enter string a\n");
    gets(a);

    printf("Enter string b\n");
    gets(b);

    n=strlen(a)+strlen(b)+1;

    for(i=0;*(a+i)!='\0';i++)
    {
        *(c+i)=*(a+i);
        if(*(a+i)=='\0')
        {
            break;
        }
    }
    for(i=0;b[i]!='\0';i++)
    {
        *(c+i)=*(b+i);
        if(*(b+i)=='\0')
        {
            break;
        }
    }
    puts(a);
    puts(b);
    puts(c);

    return;
}