#include<stdio.h>

void scopy(char *d,char *s)
{
    while(*s!='\0')
    {
        *d=*s;
        s++;
        d++;
    }
}

void main()
{
    int i;
    char arr1[50];
    char arr2[50];

    printf("Enter the String \n");
    gets(arr1);

    scopy(arr2,arr1);

    puts(arr1);
    puts(arr2);
}