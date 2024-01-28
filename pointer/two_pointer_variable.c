#include<stdio.h>

void main()
{
    int *x;
    int *y;

    int i;
    int arr[5];
    x=arr+0;
    y=arr+4;

    printf("Enter a array elements \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",x+i);
    }

    while(x<=y)
    {
        
        printf(" x is %d \t",*x);
        x++;

    }

}