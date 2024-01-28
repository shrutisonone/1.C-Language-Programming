#include<stdio.h>
int main()
{
    int sumoftwo();
    int (*a)();   //function   pointer
    a=sumoftwo;
    

    printf("%d",(*a)());

    return 0;
}

int sumoftwo()
{
    int a,b;
    int sum;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
}