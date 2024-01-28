//program to check the stored value in variables 
#include<stdio.h>

union
{ 
    int x,y;

    /* data */
}var;

int main()
{
    union var;
    var.x=90;
    printf("The value of x is %d and y is %d\n",var.x,var.y);
    var.y=30;
    printf("Thhe value of x is %d and y is %d\n",var.x,var.y);
    return 0;
}