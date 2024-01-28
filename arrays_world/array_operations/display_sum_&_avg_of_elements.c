#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    int avg;
    int n=5;
    int a[5];

    for(i=0;i<5;i++)
    {
        printf("Enter the elements of the array \n");
        scanf("%d",&a[i]);
        printf("The a[%d] is %d \n",i,a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum of the elements of array is %d \n",sum);
    printf("The average of the elements of the arrays is %d",sum/5);

    return 0;
}