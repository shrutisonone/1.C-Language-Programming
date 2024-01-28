#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    int max=0;

    for(i=0;i<10;i++)
    {
        printf("Enter the elements \n");
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("The maximum of the elements is %d",max);
}