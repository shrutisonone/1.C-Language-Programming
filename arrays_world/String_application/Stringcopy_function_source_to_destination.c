#include<stdio.h>
#include<string.h>

int main()
{
    char p[100];
    char q[100];

    printf("Enter a string which is a source string  \n");
    gets(p);
    strcpy(q,p);
    puts(p);
    puts(q);


    return 0;
}