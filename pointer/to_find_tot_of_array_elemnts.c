#include<stdio.h>

void total(int *a,int n)
{
    int i;
    int tot=*a+0;
    
    for(i=0;i<n;i++)
    {
        tot=tot+*(a+i);
    }
    printf("The total is %d",tot);

}

void main()
{
    int arr[10];
    int i;
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    
    printf("Enter the elements of the array \n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }

    void total(int*,int);
    total(arr,n);

}