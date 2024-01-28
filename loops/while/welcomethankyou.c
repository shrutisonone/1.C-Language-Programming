#include<stdio.h>
int main()
{
    int n=2;  
    while(n<=10) 
    {
        if(n%2==0)
        {
          printf("Welcome \n");
        }
        else
        {
          printf("Thank you \n");
        }
         n++;   
    }
    return 0;
}