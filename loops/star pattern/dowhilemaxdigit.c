#include<stdio.h>
int main()
{
    int x;
    int dig;
    int max=0;

    printf("Enter a number \n");
    scanf("%d",&x);
    do
    {
        dig=n%10;
         if(max<dig)
         {
            max=dig;
         }
        n=n/10;
    }
    while(x>0)
    
    printf("the msx number is %d",&max);
}
