#include<stdio.h>
int main()
{
   int x;
   int nc=0;
   printf("Enter a number \n");
   scanf("%d",&x);
   while(x>0)
   {
     nc++;
     x=x/10;
   }
    printf("the length of the number is %d",nc);

    return 0;
}