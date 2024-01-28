#include<stdio.h>
int main()
{
    int n;
    int dig=0;
    int key;


    printf("Enter a number \n");
    scanf("%d",&n);

   printf("Enter a key \n");
   scanf("%d",&key);

   for(;n>0;n=n/10)
   {
    dig=n%10;
    if(dig==key)
    {
      
        break;
    }
   }
   if(dig==key)
   {
      printf("The digit is found \n");
   }
   else
   {
    
       printf("Digit is not found \n");
   }
   
   
   
   return 0;
}