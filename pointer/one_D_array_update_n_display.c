#include<stdio.h>

void main()
{
    int arr[4];
    int i,j;
    
    printf("Enter array data \n");
    for(i=0;i<4;i++)
    {
        scanf("%d",(arr+i));  //no usage of address symbol in accessing 1d array
    }
    for(j=0;j<4;j++)
    {
        printf("%d\t",*(arr+i));   //index value printed
    }
}