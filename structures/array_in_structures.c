#include<stdio.h>

struct stud 
{
   int x,y;
};

void main()
{
    struct stud arr[79];

    arr[0].x=10;
    arr[0].y=90;

    printf(" %d \t%d\t",arr[0].x,arr[0].y);
    
    return;
}