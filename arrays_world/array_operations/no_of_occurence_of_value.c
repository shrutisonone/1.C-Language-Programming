#include<stdio.h>
int main()
{
    int i;
    int arr[10];
    int value;
    int count=0;

    printf("Enter the value to be counted \n");
    scanf("%d",&value);

    for(i=0;i<10;i++)
    {
        printf("Enter the element for the array \n");
        scanf("%d",&arr[i]);
        if(arr[i]==value)
        {
            count++;
        }
    }
    
    printf("The no of occurence of the value in the array is %d",count);
}