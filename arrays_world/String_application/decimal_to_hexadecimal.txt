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
        if(arr[i]>=49 && arr[i]<=57)
        {
           
        }
        else
        {
           break; 
        }
    }
    if(arr[i]=='\0')
    {
        printf("Decimal string\n");
    }
    else
    {
        printf("Not a Decimal string\n");
    }




    return 0;
}