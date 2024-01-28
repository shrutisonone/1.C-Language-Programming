#include<stdio.h>
#include<stdlib.h>

int main()
{

   int *ptr;
   int i;
   int n;

   printf("Enter the number of elements \n");
   scanf("%d",&n);

   printf("Enter the elements of arrau\n");

   ptr=(int*)malloc(n*sizeof(int));

   if(ptr==NULL)
   {
    printf(" Memory is not allocated by malloc\n");
    exit(0);
   }
   else
   {
    printf("Memory is successfully allocated by malloc\n");

    free(ptr);
    printf("The  memory has been freed\n");
     
    for(i=0;i<n;i++)
    {
        ptr[i]=i+1;
    }
    
    printf("Elements of array are \n");
    for(i=0;i<n;i++)
    {
        printf("%d",ptr[i]);
    }
   }

    return 0;
}