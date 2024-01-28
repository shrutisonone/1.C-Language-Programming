#include<stdio.h>
int main()
{
    int n=1;
    int sum=0;  //initialization
    while(n<=100) //condition
    {
        sum=sum+n;
        n++;   //increment
    }
    printf("The sum is %d",sum);
    return 0;
}