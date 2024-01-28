#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x[5];
    int y[5];
    int i=0;
    int j=5;
    int *a;
    int *b;
    int input(int *);
    int display(int);
    int swap(int*,int*);

    printf("Enter the elements of the array\n");

    for(i=0;i<5;i++)
    {
        input(&x[i]);
    } 

    int swap(int *a,int *b);
    for(i=0,j=4;i<j;i++,j--)
    swap(&a[i],&b[i]);

    for(i=0;i<5;i++)
    {
        display(y[i]);
    }
    
    return 0;
}

int input(int *a)
{
    scanf("%d",a);
    return 0;
}

int swap(int *x,int *y)
{
   
       int temp=*x;
       *x=*y;
       *y=temp;

    return 0;
}

int display(int b)
{
    printf("%d",b);
    return 0;
}