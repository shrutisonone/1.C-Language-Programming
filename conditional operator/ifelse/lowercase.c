#include<stdio.h>

int main()
{
    char a;
    printf("Enter a character \n");
    scanf("%c",&a);
    if(a>=97 && a<=122)
    {
        printf("It is a Lower case character\n");
    }
    else
    {
        printf("Not a Lower case character \n");
    }
    return 0;
}