#include<stdio.h>
int main()
{
    int x;
    int dig=0;
    int rev=0;
    printf("Enter a number \n");
    scanf("%d",&x);
    while(x>0)
    {
       dig=x%10;
       rev=rev*10+dig;
       x=x/10;
    }
    printf("Reverse is %d",rev);
    if(x<0)
    {
    printf("reverse is zero\n ");
    }
    return 0;
}