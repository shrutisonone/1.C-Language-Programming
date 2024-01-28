#include<stdio.h>

int main()
{
    int x[4][3];
    int i,j;
    printf("\n Array Data ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n x[%d][%d]:",i,j);
            scanf("%d",*(x+i)+j);
        }
    }

    printf("\n Array Data \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",*(*(x+i)+j));
        }
        printf(" \n");
    }


    return 0;
}