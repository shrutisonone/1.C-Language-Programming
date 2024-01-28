#include<stdio.h>
int main()
{
    int n;
    int i=1;
    int count;
    count=0;
    printf("enter a number \n");
    scanf("%d",&n);

    while(i<=n)
    {
        if(n%i==0)
        {
            printf("Divisible by number %d\n",i);
            count++;
        }
        i++;
    }
    if(count==2)
    printf("It is a prime number \n");
    printf("The divisibility of the number %d is %d",n,count);
    return 0;
}