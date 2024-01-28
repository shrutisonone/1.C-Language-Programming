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
        if(arr[i]=='1' || arr[i]=='0')
        {
           
        }
        else
        {
            break;
        }
    }
    if(arr[i]>1)
    {
        printf("Not a Binary string\n");
    }
    else
    {
        printf(" Binary string\n");
    }




    return 0;
}