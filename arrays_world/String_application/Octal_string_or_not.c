#include<stdio.h>
int main()
{
    int i;
    char arr[50];

    printf("Enter the string\n");
    gets(arr);
    printf("The string entered is ");
    puts(arr);

    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='0' || arr[i]=='7')
        {
           
        }
        else
        {
            break;
        }
    }
    if(arr[i]>'7')
    {
        printf("Not a 0ctal string\n");
    }
    else
    {
        printf(" 0ctal string\n");
    }




    return 0;
}