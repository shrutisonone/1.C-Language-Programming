#include<stdio.h>

int main()
{
    int dig,tot,n;
    printf("Enter a three digit  number\n ");
    scanf("%d",&n);
    dig=n%10;
    tot+=dig;
    n=n/10;
    dig=n%10;
    tot+=dig;
     n=n/10;
    dig=n%10;
    tot+=dig;
    printf("%d",tot);


   return 0;
}