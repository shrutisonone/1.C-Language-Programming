#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50]="S e l a m ";
    char str2[50]="S e l a m ";
    int i;     

     int result=strcmp(str1,str2);

    printf("The Return value is %d",result);

    return 0;
}

