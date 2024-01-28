#include<stdio.h>
#include<stdlib.h>


union one
{
    int a;
    char b;
    float c;
}t;
struct two
{
    union one t;
    char flag;
};

void main()
{
    struct two arr[5];
   int i=0;
   printf("\n int i\n char c\n flooat f\n");
   scanf("%c",&arr[i].flag);
   while(i<5)
   {
    switch(arr[i].flag)
    {
        case'i':
          printf("Your choice is int \n");
          scanf("%d",&arr[i].one.a);
          break;
        case'c':
          printf("Your choice is char \n");
          scanf("%c",&arr[i].one.b);
          break;
        case'f':
          printf("Your choice is float \n");
          scanf("%f",&arr[i].one.c);
          break;
    }
    i++;
   }

   for (i=0;i<5;i++)
   {
    switch(arr[i].flag)
    {
         case1:
           printf("%d",arr[i].one.a);
           break;
         case2:
           printf("%c",arr[i].one.b);
           break;
         case3:
           printf("%f",arr[i].one.c);
           break;
    }
   }
  return;
}