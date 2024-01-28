#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    int i;
    char str[5][15];
    char p[15];
    char temp;

    printf("Enter the names\n ");
    for(i=0;i<5;i++)
    {
        char temp=getch();
        gets(str[i++]);
    }

    printf("Enter the name to be searched \n");
     gets(p);
     puts(p);


    for(i=0;i<5;i++)
    {
        if(strcmp(str[i],p)==0)
        {
            break;
        }
    }
    if(i==5)
    {
        printf("Not Found \n");
    }
    else
    {
        printf("Found \n");
    }

    return 0;

}