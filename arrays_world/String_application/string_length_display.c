#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    printf("Enter the string\n");
    gets(str);
    printf("The length of string is %d",strlen(str));
  return 0;
}