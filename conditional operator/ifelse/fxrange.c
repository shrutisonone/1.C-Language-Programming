#include<stdio.h>

int main()
{
    char x;
    printf("Enter a character \n");
    scanf("%c",&x);
    if(x>='F' && x<='X')
    {
        printf("It is a F-X range \n");
    }
    else  
    {
        printf("It is not in F-x range \n");
    }
    return 0;
}