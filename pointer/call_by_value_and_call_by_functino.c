#include<stdio.h>

void main()
{
    int a[5];
    int i=0;
    int j;
    int b[5];

    void display();
    void swap(int* ,int* );
    void input(int*);

    for(i=0;i<5;i++)
       input(&a[i]);
    printf("Array Data\n");

    for(i=0;i<5;i++)
       display(a[i]);

    for(i=0,j=4;i<j;i++,j--)
    {
        swap(&a[i],&b[j]);
    }
    printf("Array Data \n");

    for(i=0;i<5;i++)
       display(a[i]);
}

void input(int *p)
{
   printf("Enter a number \n");
   scanf("%d",p);
}
void display(int a)
{
   printf("\nDAta\n %d",a);
}

void swap(int *a,int *b)
{
   int temp=*a;
   *a=*b;
   *b=temp;
}