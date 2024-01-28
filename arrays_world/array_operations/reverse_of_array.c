#include<stdio.h>
int main()
{
    int i;
    int n;
    int arr[5];
    int temp=0;

    for(i=0;i<5;i++)
    {
        printf("Enter the elements for the array \n");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
     printf("The original array is arr[%d] is %d \n",i,arr[i]);

    }
    for(i=0,n=4;i<n;n--,i++)
    {
        temp=arr[i];
        arr[i]=arr[n];
        arr[n]=temp;
    }
    for(i=0;i<5;i++)
    {
        printf("The reversed array is arr[%d] is %d \n",i,arr[i]);
    }
    return 0;
}