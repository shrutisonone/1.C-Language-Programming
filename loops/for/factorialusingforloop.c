#include<stdio.h>
int  main()
{
   int n;
   int fact;

  printf("Enter a number \n");
  scanf("%d",&n);

   for(fact=1;n>0;n--)
   {
         fact=fact*n;    
   }
   printf("The factorial is %d",fact);


    return 0;
}