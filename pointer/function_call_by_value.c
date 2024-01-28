#include<stdio.h>

void main()
{
    int a,b;
    void swap(int ,int);
    printf("Enter Two Numbers \n");
    scanf(" %d%d",&a,&b);

    printf("a=%d, b=%d \n",a,b);

    swap(a,b);
    
    printf("\n a=%d and b=%d\n",a,b);
   
}

void swap(int x,int y)
{
    int z=x;
    x=y;
    y=z;

    printf("x=%d and y=%d \n ",x,y);
}