#include<stdio.h>

struct value
{
    int v1,v2;
};

int main()
{
    struct value p1;
    struct value *ptr;
    ptr=&p1;

    printf("Enter the value \n");
    scanf("%d",&ptr->v1);

    printf("\n %d",ptr->v1);

    return 0;
}