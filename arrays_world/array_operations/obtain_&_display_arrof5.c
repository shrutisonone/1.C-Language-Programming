#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter a element for %d index of array\n",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("The arr[%d] is %d\n",i,arr[i]);
    
    }

    return 0;
}
    