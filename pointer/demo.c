#include<stdio.h>

void input(int* x,int n)
{
   int i=0;
   while(i<3)
   {
    scanf("%d \n",x+i);
    i++;
   }
}

void display(int* y,int n)
{ 
    int i=0;
    while(i<3)
    {
      printf("%d\n",*(y+i));
      i++;
    }
    
}
void main()
{
    int arr[3];
    int i;
    int a;

    void input(int*,int);
    void display(int* ,int );

    printf("Enter the array elements \n");
    input(a,3);

    printf("The update array is \n");
    display(a,3);
}

