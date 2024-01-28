#include<stdio.h>
int main()
{
    int n=0;
    int pc=0;
    int nc=0;
    int zc=0;
    int num;

    while(n<=10)
    {
      printf("Enter a number \n");
      scanf("%d",&num);
      if(num>0)
      {
        pc++;
      }
      else
      {
        if(num<0)
        {
           nc++;
        }
        else
        {
           zc++;
        }
      }
        n++;
    }
    printf("The count of positive is %d and of negative is %d and of zero is %d",pc,nc,zc);
    return 0;
}