#include<stdio.h>

int main()
{
   int n=1;
   int x;
   int pc=0;
   int nc=0;
   int zc=0;

   while(n<=10)
   {
    printf("Enter a number \n");
    scanf("%d",&x);
    if(x>0)
    {
           pc++;
    }
    else
    {
        if(x<0)
        {
              nc++;
        }
        else
        {
           zc++;
        }
    }
    n++;
   }
   printf("The count of positive %d , of negative is %d and of zero is %d",pc,nc,zc);



    return 0;
}