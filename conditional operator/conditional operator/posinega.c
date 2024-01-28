#include<stdio.h>

int main()
{
    int x;
    printf("Enter a chracter \n");
    scanf("%c",&x);
    printf("you have entered  %c is %s",x,(x>='0' && x<='9')?("Hexadigit"):(x>='A' && x<='F')?("Hexa-Alphabet"):("Other"));   
}