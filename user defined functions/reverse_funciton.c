#include<stdio.h>

void rev()
{
    int num;
    int i;
    int dig=0;
    int rev=0;

    printf("Enter a number \n");
    scanf("%d",&num);
    
    while(num>0)
    {
        dig=num%10;
        rev=rev*10+dig;
        num=num/10;
    }
    printf("The Reverse of the number is %d",rev);
}

int main()
{
    void rev();
    rev();

    return 0;
}