#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number \n");
  scanf("%d",&n);
  if(n<0)
  {
     printf("Below zero \n");
  }
  else
  {
    if((n>=0 && n<=100))
    {
        printf("within 0 to 100 \n");
    }
    else 
    {
    printf("above 100 \n");
    }
  }
  return 0;
}