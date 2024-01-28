#include<stdio.h>

int main()
{
    int i=1;
    int j;
    int n;
    printf("Enter a value for n \n");
    scanf("%d",&n);
    
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            { 
              printf(" * ");  
            }
            j++;
        }
        printf("\n");
      i++;
    }

    return 0;
}