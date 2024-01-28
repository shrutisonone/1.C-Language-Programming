#include<stdio.h>
int main()
{
    int x;
    int flag=1;
    int dig;
    
    while(1)
    {
       printf("Enter a number \n");
       scanf("%d",&x);
       dig=x%10;
       if(dig>1)
       {
        flag=0;
       }
       if(flag==0)
       {
          printf("Not a binary number \n");
       }
       printf("It is a Binary number \n");
       
    }

    return 0;
}