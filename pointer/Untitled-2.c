#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5];
    int b[5];
    int i=0;
    int j=5;
    int *a;
    int *b;
    int input(int *);
    int display(int );
    int swap(int*,int*);

    printf("Enter the elements of the array\n");

    for(i=0;i<5;i++)
    {
        intput(&a[i]);
    } 
    swap(*a,*b);
    for(i=0;i<5;i++)
    {
        display(a);
    }

    return 0;
}

int input(int *a)
{
    scanf("%d",a);
}
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int display(b)
{
    printf("%d",b);
}