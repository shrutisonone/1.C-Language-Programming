#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int n;
    int *ptr;
    int *ptr1;

    printf("Enter the number of elements \n");
    scanf("%d",&n);
    printf("Entered number of elements\n");
     
    ptr=(int*)calloc(n,sizeof(int));

    ptr1=(int*)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
    printf("Memory not allocated \n");
    exit(0);
    }
    else 
    {
        printf("Memory has been successfully allocated by malloc\n");

        free(ptr);
        printf("Memory has been freed\n");

        printf("Memory has been successfully allocated by calloc\n");

        free(ptr1);
        printf("Memory has been freed\n");

        for(int i=0;i<n;i++)
        {
        ptr[i]=i+1;
        }
    }

    printf("Elements of array are \n");
    for(int i=0;i<n;i++)
    {
        printf("%d",*(ptr+i));
    }
    return 0;
}