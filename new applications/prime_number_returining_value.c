#include<stdio.h>

int prime()
{
    int i;
    int stop;
    int num;
    int no;
    
    printf("Enter a number \n");
    scanf("%d",&num);
    
    for(i=2;i<=num;i++)
    {
       if(num%2==0)
       {
       break;
       }
    }
    return (num==i);
}

void main()
{
  int prime();
  if(prime())
  {
    printf("Prime number \n");
  }
  else 
  {
    printf("Not a prime number \n");
  }
}