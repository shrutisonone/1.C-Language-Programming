#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void revstr(int *a)
{
    int i;
    int *t=a+strlen(a)-1;
    for(i=0;a[i]!='\0';i++,t--)
    {
        int temp=*(a+i);
        *(a+i)==*t;
        *t=temp;
    }
}

void main()
{
    int i;
    int str[100];
    
    printf("Enter the string \n");
    gets(str);

    void revstr(int*);
    revstr(&str);
}

