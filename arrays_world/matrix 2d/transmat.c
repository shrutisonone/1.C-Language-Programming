#include<stdio.h>

int main()
{
    int a[3][3];
      int b[3][3];
     

// for a
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


//for b
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            b[i][j]=a[j][i];    //row becomes column and column becomes row
        }
    }
    
   
//b print
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;

}