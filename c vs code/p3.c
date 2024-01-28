#include<stdio.h>
#include<conio.h>
void main()
{
    int a[40],pos,i,N,value;
    printf("Enter no. of elements in array ");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter the element[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the position where you want to insert the element");
    scanf("%d",&pos);
    printf("Enter the value into that position ");
    scanf("%d",&value);
    for(i=N-1;i>=pos;i--)
    {
       a[i+1]=a[i];
       a[pos-1]=value;
    }
    printf("Final array after insrtion is \n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",a[i]);
    }
}