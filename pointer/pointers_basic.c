//use of operator & and *

#include<stdio.h>

int main()
{
    int x=32;
    printf("value at x by d %d \n",x);
    printf("value at x by u %u\n",x);
    printf("address at x by d %d\n",&x);
    printf("address at x by u %u\n",&x);
    printf("value at %d\n",*(&x));

    return 0;
}