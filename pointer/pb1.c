#include<stdio.h>

int main()
{
    int arr[4];
    int *r=(arr+0);

    
    for(int i=0;i<4;i++)
    {
        printf("Enter the elements of the array \n");
        scanf("%d\t",(r+i));
    }
    for(int i=0;i<4;i++)
    {
        scanf("%d\t",*(r+i));
    }

    return 0;
}