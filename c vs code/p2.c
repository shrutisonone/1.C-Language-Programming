#include<stdio.h>
#include<conio.h>
void main()
{
    int N,i,sum=0;
    int A[100];
    float avg;
    printf("Enter the length of your array\n");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter the values in array"); 
        scanf("%d",&A[i]);

    }
    for(i=0;i<N;i++)
    {
        sum=sum+A[i];
    }
    avg=sum/N;
    printf("Sum and Average values of array elements is %d and %f respectively",sum,avg);
    getch();
}