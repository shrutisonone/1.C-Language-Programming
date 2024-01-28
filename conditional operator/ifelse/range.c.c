#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number \n");
    scanf("%d",&x);
    if(x>=49 && x<=500)
    {
        printf("It is 49-500 range \n");
    }
    else  
    {
        printf("It is not 49-500 range \n");
    }
    return 0;
}