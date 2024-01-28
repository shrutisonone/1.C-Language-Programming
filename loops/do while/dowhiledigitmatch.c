#include<stdio.h>
int main()
{
   int n;
   int dig;
   int sdig;

   printf("Enter a number \n");
   scanf("%d",&n);

   printf("enter a number \n");
    scanf("%d",&sdig);

   do  //while(1)
   { 
    dig=n%10;
    if(sdig==dig)
     {
        printf("Digit found \n");
        break;
     }
     else
     {
        n=n/10;
     }
    
    }
   while(n>0);



   return 0;
}