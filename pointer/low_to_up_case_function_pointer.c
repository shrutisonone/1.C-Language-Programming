#include<stdio.h>

void lowtoup(char *a)
{
   while(*a!='\0')
   {
      if(*a!=32)
      {
         *a=*a-32;
      }
      a++;
   }
}

void main()
{
   int i;
   char str[100];

   printf("Enter a string \n");
   gets(str);

   void lowtoup(char*);
   lowtoup(str);
   
   for(i=0;str[i]!='\0';i++)
   {
    printf("%c ",str[i]);
   }
   printf("\n");
   puts(str);
}