#include<stdio.h>
int main()
{
    int i;
    char arr[100];

    printf("Enter the string \n");
    gets(arr);
    printf("The entered string is \n");
    puts(arr);

    for(i=0;arr[i]!='\0';i++)
    {   
        
        if(arr[i]>=97 && arr[i]<=122)
        {
            arr[i]=arr[i]-32;
        }
        else if(arr[i]>=65 && arr[i]<=90)
        {
           arr[i]=arr[i]+32;
           
        }
        else if(arr[i]==' ')
        {  
            arr[i]==' ';

        }  
    }
    printf("String after convertion\n");
    puts(arr);

    return 0;
}

