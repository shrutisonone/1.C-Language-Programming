#include<stdio.h>
#include<stdlib.h>

int allocate(int n )
{
    return (int*)malloc(n*sizeof(int));
}


int input(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
}


int display(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d",*(a+i));
}


int main()
{
    int *ptr;
    int n;

    printf("Enter the number of elements \n");
    scanf("%d",&n);
    *ptr=allocate(n);
    input(ptr,n);
    display(ptr,n);
    free(ptr);
    return 0;
}
