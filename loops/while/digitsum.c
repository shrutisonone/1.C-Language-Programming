#include<stdio.h>

int main()
{
   int x;
   int tot=0;
   int dig=0;
   printf("Enter  number \n");
   scanf("%d",&x);
   while(x>0)
   {
      dig=x%10;
      tot=tot+dig;
      x=x/10;
   }
   printf("The total digit sum is %d",tot);

    return 0;
}