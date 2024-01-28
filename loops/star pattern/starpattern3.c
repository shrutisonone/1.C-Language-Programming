#include<stdio.h>

int main()
{
    int i;
    int j;
    int n;
    printf("Enter a value for n \n");
    scanf("%d",&n);
    i=n;
    while(n>=0)
    {
        j=1;
        while(j<=n)
        {
            if(i==n || j==1 || j==n )
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
      n--;
    }

    return 0;
}