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
        if(arr[i]>='0' || arr[i]<='9' || arr[i]>='a' || arr[i]<='f')
        {
           
        }
        else
        {
            break;
        }
    }
    if(arr[i]>9 || arr[i]>'f')
    {
        printf("Not a Hexadecimal string\n");
    }
    else
    {
        printf(" Hexadecimal string\n");
    }




    return 0;
}