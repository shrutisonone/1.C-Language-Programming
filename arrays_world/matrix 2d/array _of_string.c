#include<stdio.h>
#include<string.h>

int main()
{
    int i,j;
    char str[5][15];
    
    
    printf("Enter the name \n");
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }

    printf("\n The names entered are as follows \n");

    for(i=0;i<5;i++)
    {
        puts(str[i]);
    }
    
    return 0;
}