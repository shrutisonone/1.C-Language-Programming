#include<stdio.h>

int digitsum()
{
    int i;
    int dig=0;
    int sum=0;
    int num;

    printf("Enter a number \n");
    scanf("%d",&num );
    
    while(num>0)
    {
        dig=num%10;
        sum=sum+dig;
        num=num/10;

    }
    printf("sum is %d",sum);

    return sum;
}
int main()
{
    int digitsum();  
   
    printf("sum is %d",digitsum());
    return 0;
}

