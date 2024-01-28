#include<stdio.h>

int main()
{
    char x;
    printf("Enter a character \n");
    scanf("%c",&x);
    if(x>=65 && x<=90)
    {
        printf("It is a uppercase character \n");
    }
    else
    {
        printf("It is not a uppercase character \n");
    }
    return 0;
}