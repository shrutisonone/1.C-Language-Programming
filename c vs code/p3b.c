#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,N,loc;
    printf("Enter the no, of elements");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Element of array are [%d]",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the position from which the number has to be deleted \n");
    scanf("%d",&loc);
    for(i=loc;i<N-1;i++)
    {
        a[i]=a[i+1];
    }
    N=N-1;
    printf("Final array after deletion operation is ");
    for(i=0;i<N;i++)
    {
        printf("a[%d]=%d \n",i,a[i]);
    }
}


