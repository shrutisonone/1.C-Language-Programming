#include<stdio.h>
//    &x[i][j]=*(x+i)+j
//    x[i][j]=*(*(X+i)+j)
void main()
{
    int s[5][4];
    int i,j;

    printf("Enter the elements of 2D array\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("s[%d][%d]\t",i,j);
            scanf("%d",*(s+i));
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" %d ",*(*(s+i)));
        }
        printf("\n");
    }
}