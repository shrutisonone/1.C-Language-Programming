#include<stdio.h>
int main()
{
  int i;
  int n;
  int max;
  
  for(i=1;i<=5;i++)
  {
    printf("enter a number \n");
    scanf("%d",&n);

    if(i==1)
    {
       max=n;
    }
    else
    {
        if(n>max)
        {
            max=n;
        }
    }

  }
  printf("The maximum value is %d \n",max);

  return 0;
}


