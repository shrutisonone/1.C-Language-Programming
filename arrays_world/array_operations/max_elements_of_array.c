#include<stdio.h>
int main()
{
    int arr[10];
    int max=0;
    
    for(int i=0;i<10;i++)
    {
        printf("Enter the element for the array \n");
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<10;i++)
    {
        printf("arr[%d] is %d  \n",i,arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
     printf("The maximum element of the array is %d\n",max);

     return 0;
}