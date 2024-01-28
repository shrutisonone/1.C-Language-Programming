#include<stdio.h>

int main()
{
    char x;
    printf("Enter a character \n");
    scanf("%c",&x);
    if((x>=97 && x<=122) || (x>=49 && x<=57))
    {
        printf("It is a hexa-character \n");
    }
    else  
    {
        printf("It is not a hexa-character \n");
    }
    return 0;
}