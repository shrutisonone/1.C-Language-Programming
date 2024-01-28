#include<stdio.h>
int main()
{
    int n=1;
    int se=0;
    int so=0;
    while(n<=10) 
    {
        if(n%2==0)
        {
          se=se+n;
        }
        else 
        {
        so=so+n;
        }
        n++;   //increment
    }
    printf("The even sum is  %d and odd sum is %d",se,so);
    return 0;
}