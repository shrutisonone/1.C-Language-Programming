#include<stdio.h>

int main()
{
    char x;
    printf("Enter a character \n");
    scanf("%c",&x);
    if (x>=49 && x<=55)
    {
        printf("It is a Octal-character \n");
    }
    else  
    {
        printf("It is not a Octal-character \n");
    }
    return 0;
}