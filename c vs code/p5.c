#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[25],i,j,N,swap;
    printf("Enter the number of elements");
    scanf("%d",&N);
    printf("Enter %d numbers ",N);
    for(i=0;i<N;i++)
    scanf("%d",&arr[i]);

 for(i=0;i<N-1;i++)
 {
    for(j=0;j<=N-i-1;j++)
    {
        if(arr[j]=arr[j+1])
        {
            swap=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=swap;

        }
    }
 }
 printf("Sorted array is \n");
 for(i=0;i<N;i++)
 {
    printf("%d\n",arr[i]);
 }
  getch();
}  