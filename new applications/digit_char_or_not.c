#include<stdio.h>

int digchar()
{
    char ch;
    printf("Enter a digit Character \n");
    scanf("%c",&ch);
    return (ch>=49 || ch<=57);
}

void main()
{
    int digchar();
    if(digchar())
    {
        printf("Digit Character \n");
    }
    else
    {
        printf("Not a Digit Character \n");
    }
}