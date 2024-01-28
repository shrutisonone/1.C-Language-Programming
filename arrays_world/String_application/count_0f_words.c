#include<stdio.h>
int main()
{
    int i;
    int count=0;
    char arr[100];

    printf("Enter the string \n");
    gets(arr);
    printf("Entered string is :");
    puts(arr);

    for(i=0;arr[i]!='\0';i++)
    {
        if(65<arr[i]<122)   
        {
           count++;
        }
        else if(arr[i]==" ")
        {
            count++;
        }
    }
    
    printf("The count of words is %d",count);
    return 0;
}