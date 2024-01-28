#include<stdio.h>

void main()
{
    int arr[5];
    void input(int* );
    void display(int *);

    int i;
    
    int*a;

    printf("Enter elements \n");
    input(arr);
    display(arr);

    return 0;
}
void input(int* a)
{
    int i;
    for(i=0;i<5;i++)
    scanf("%d",(arr+i));
}
void display(int* a)
{
    int i;
    while(i<5)
    {
    printf("%d",*(arr+i));
    i++;
    }
}
//how arr is undefined 