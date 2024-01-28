#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number \n");
  scanf("%d",&n);
  if(n<0)
  {
     printf("Negative \n");
  }
  else
  {
    if((n==0))
    {
        printf("Zero \n");
    }
    else 
    {
    printf("Positive \n");
    }
  }
  return 0;
}