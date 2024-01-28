#include<stdio.h>

void findre(int *a,int sv,int rv,int n)
{
    printf("Enter the search value \n");
    scanf("%d",&sv);

    printf("Enter the replace value \n");
    scanf("%d",&rv);

    int i;

    for(i=0;i<n;i++)
    {
        if(*(a+i)==sv)
        {
            *(a+i)=rv;
            break;
        }
    }
    printf("the element found at %d\n",*(a+i));

    for(i=0;i<n;i++)
    {
        printf("%d \t",*(a+i));
    }
    
}


int main()
{
    int i;
    int sv;
    int a;
    int rv;
    int arr[5];

    printf("Enter elements of array \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    void findre(int*,int ,int ,int );
    findre(arr,6,4,5);

    return 0;
}
