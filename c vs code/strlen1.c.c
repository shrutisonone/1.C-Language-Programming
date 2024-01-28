#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char arr[]="HELLOOO";
    int len1,len2;
    len1=strlen(arr);
    len2=strlen("Hey");
    printf("String=%s  Length=%d",arr,len1);
    printf("Sstring=%s  Length=%d","Hey",len2);
    getch();
}