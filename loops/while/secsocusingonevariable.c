#include<stdio.h>
int main()
{
    int n=1;
    int sec=0;
    while(n<=10) 
    {
        if(n%2==0)
        {
          sec++;
        }
        n++;   //increment
    }
    printf("The even count is  %d and odd count is %d",sec,10-sec);
    return 0;
}