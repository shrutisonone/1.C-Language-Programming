#include<stdio.h>

void search(int *a,int n)
{
    int i;
    int sv;

    printf("Enter the search value \n");
    scanf("%d",&sv);

    for(i=0;i<n;i++)
    {
         if(*(a+i)==sv)
         {
            printf("The element found \n");
            break;
         }
    }
    
}

void main()
{
    int arr[50];
    int n;
    int i;
    printf("Enter the size of array \n");
    scanf("%d",&n);

    printf("Enter the elements of array \n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }

    void search(int*,int);
    search(arr,n);
    
}