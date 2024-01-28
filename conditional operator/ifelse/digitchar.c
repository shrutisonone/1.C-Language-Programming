#include<stdio.h>

int main()
{
    char a;
    printf("Enter a character \n");
    scanf("%c",&a);
    if(a>=49 && a<=57)
    {
        printf("It is a Digit character\n");
    }
    else
    {
        printf("Not a Digit character \n");
    }
    return 0;
}