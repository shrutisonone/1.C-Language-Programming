#include<stdio.h>
int main()
{
   int x;
   int tot=0; 

   while(1)
   {
     printf("Enter a number \n");
     scanf("%d",&x);
     if(x==0)
     {
        break;
     }
     if(x<0)
     {
        printf("Invalid input \n");
        continue;
     }
     tot=tot+x;
   }
   printf("The sum ids %d",tot);
    return 0;
}