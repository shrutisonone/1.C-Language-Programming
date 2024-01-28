#include<stdio.h>
int main()
{
  int i;
  int n;
  int max;
  int min;
  
  for(i=1;i<=5;i++)
  {
    printf("enter a number \n");
    scanf("%d",&n);
    
    if(i==1)
    {
      max=n;
      min=n;
    }
    else
    {
        if(n>max)
        {
            max=n;
        }
        else
        {
          min=n;
        }

        
    }

  }
  printf("The maximum value is %d and minimum is %d  \n",max,min);

  return 0;
}


