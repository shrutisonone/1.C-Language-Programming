#include<stdio.h>
int main()
{
    int i;
    int ne=0;
    int no=0;
    int arr[10];
    
    for(i=0;i<10;i++)
    {
        printf("Enter the element in the array\n");
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            ne++;
        }
        else
        {
            no++;
        }

    }
    printf("The count of even numbers is %d and that of odd numbers is %d",ne,no);
    return 0;
}