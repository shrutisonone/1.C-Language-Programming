#include<stdio.h>

int main()
{
    int i;
    int j;
    int n;
    printf("Enter a value for n \n");
    scanf("%d",&n);
    i=1;

    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            if(i==n || j==1 || i==j )
            { 
              printf(" * ");  
            }
            else
            
            {
              printf("   ");
            }
           j++;
        }
        printf("\n");
      i++;
    }

    return 0;
}