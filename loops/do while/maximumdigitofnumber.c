#include<stdio.h>
int main()
{
    int x;
    int max=0;
    int dig;

    printf("Enter a number \n");
    scanf("%d",&x);

    do
    {
        dig=x%10;
        if(dig>max)
        {
          max=dig;
          break;
        }
       x=x/10;
     }
    while(x!=0);
       printf("max is %d \n",&max);
 return 0;
}