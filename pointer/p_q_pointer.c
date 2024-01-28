#include<stdio.h>

int main()
{
    int arr[5];
    int *p,*q;
    p=arr+0;
    q=arr+4;

    printf("Enter elements\n");
    while(p<=q)
    {
        scanf("%d",p);
        p++;
    }
    p=arr;  // back to start
    while(p<=q)
    {
        printf("%d\n",*p);
        p++;
    }
    return 0;
}