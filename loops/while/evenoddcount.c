#include<stdio.h>
int main()
{
    int n=1;
    int sec=0;
    int soc=0;
    while(n<=10) 
    {
        if(n%2==0)
        {
          sec++;
        }
        else 
        {
        soc++;
        }
        n++;   //increment
    }
    printf("The even count is  %d and odd count is %d",sec,soc);
    return 0;
}