#include<stdio.h>

int main()
{
    int a[3][3];
      int b[3][3];
      int c[3][3];

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
            scanf("%d",&b[i][j]);
        }
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
          c[i][j]=0;
           for(int k=0;k<3;k++)
           {
             c[i][j]=c[i][j]+a[i][k]*b[k][j];
           }
        }
    }

//c print
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;

}