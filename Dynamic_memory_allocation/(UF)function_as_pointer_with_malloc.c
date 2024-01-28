#include<stdio.h>

int main()
{
    int *ptr,i,j;
    int n;
    printf("Data \n");
    scanf("%d",&n);
    ptr=allocate(n);
    input(*ptr,n);
    display(*ptr,n);
    free(ptr);

    return 0;
}

int* allocate(int n)
{
    int* ptr;
    ptr=(int*)malloc(n*sizeof(int));

}
void input(int *ptr,int n)
{
    int i=0;
    while(i<n)
    {
        scanf("%d",(a+i));
        i++;
    }
    return 0;
}
void display(int *b,int n)
{
   int i=0;
   while(i<n)
   {
     printf("%d\n",*(b+i));
     i++;
   }
}
