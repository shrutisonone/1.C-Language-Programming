#include<stdio.h>

void main()
{
   char str[100];

   printf("Enter a string \n");
   gets(str);

   void display(char*);
   display(str);
}

void display(char *x)
{
    puts(x);
}
//or it can be like this 
void display(char *y)
{
    int i;
    while(y!='\0')
    {
        printf("%c\t",*(y+i));
        y++;
    }
}