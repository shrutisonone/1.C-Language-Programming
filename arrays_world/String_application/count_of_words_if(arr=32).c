#include<stdio.h>
void main()
{
    int i;
    char arr[100];
    int count=0;

    printf("Enter the string\n");
    gets(arr);
    printf("The string entered is ");
    puts(arr);

    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==32 || arr[i]=='\0')
        {
           count++;
        }
        else if(arr[i]='\0')
        {
            break;
        }
    }

    return ;
}