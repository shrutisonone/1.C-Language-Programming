#include<stdio.h>

int main()
{
    int dig,rev,n;
    printf("Enter a three digit  number\n ");
    scanf("%d",&n);
    dig=n%10;
    rev=rev*10+dig;
    n=n/10;
    dig=n%10;
    rev=rev*10+dig;
     n=n/10;
    dig=n%10;
    rev=rev*10+dig;
     n=n/10;
    printf("%d",rev);


   return 0;
}