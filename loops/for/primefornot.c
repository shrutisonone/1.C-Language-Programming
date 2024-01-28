#include<stdio.h>
int main()
{
    int i;
    int n;
    int stop;
    
    for(n==10;n>=100;n++)
    {
        for(stop=n/2;i=2,i<=stop;i++)
        {
          if(n%i==0)
          {
            break;
          }   
          if(i>stop)
          {
            printf("%d is a prime number \n",n);
          }
         // printf(" %d is n \n",n);
          //printf("%d is i \n",i);
        }
        
    }
    return 0;
}