#include<stdio.h>
int main()
{
    int x;
    int rev=0;
    int temp;
   

    printf("Enter a number \n");
    scanf("%d",&x);
     temp=x;
    while(x>0)
    {
       rev=rev*10+(x%10);
       x=x/10;
    }
    printf("Reverse is %d \n",rev);
    printf("Original number is %d\n",temp);
    if(rev==temp)
    {
      printf("a Palindrome \n");

    }
    else
    {
        printf(" Not a Palindrome \n");
    }
    return 0;
}