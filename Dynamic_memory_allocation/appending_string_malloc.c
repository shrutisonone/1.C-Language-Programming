#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[10];
    char b[10];
    char *c;
    int n;
    int j;

  
     printf("Enter the string a\n");
     gets(a);

     printf("Enter the string b\n");
     gets(b);

     n=strlen(a)+strlen(b)+1;

    c=(char*)malloc(n*sizeof(char));

    for(int i=0;*(a+i)!='\0';i++)
    {
       *(c+i)=*(a+i);
    }

    for(int i=0,j=0;*(c+i)!='\0';i++,j++)
    {
        *(c+i)=*(b+j);
    }

    puts(a);
    printf("\t");
    puts(b);
    printf("\t");
    puts(c);

    free(c);

    return 0;
}