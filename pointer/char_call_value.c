#include<stdio.h>
#include<conio.h>

void revchar(char *a)
{
    char *ch;
   
    if(*ch>=65 && *ch<=90)
    {
        *a=*a+32;
    }
    else
    {
        return ;
    }
}

void main()
{
    char str[100];
  
    int i=0;

    printf("enter string \n");
    str[i]=getch();
    puts(str);

    for(i=0;str[i]!='\0';i++)
    {
        revchar(&str[i]);
    }
    str[i]='\0';

}