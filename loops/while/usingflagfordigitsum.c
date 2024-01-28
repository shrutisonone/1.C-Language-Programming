#include<stdio.h>
int main()
{
   int flag=1;
   int n;
   int tot=0;

   while(flag==1)
   {
     printf("enter a number \n");
     scanf("%d",&n);
     if(n==0)
     {
        flag=0;
     }
     else
     {
        tot=tot+n;
     }

   }
  printf("The sum is %d",tot);

    return 0;
}