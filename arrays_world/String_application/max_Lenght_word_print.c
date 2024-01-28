#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    int ws=0;
    int we=0;
    int wl;
    int max=0;     

    printf("Enter the string\n");
    gets(str);
    printf("The string entered is ");
    puts(str);

    do
    { 
        if(str[i]==32||str[i]=='\0')
        {
           we=i-1;
           printf("The word start is %d and end is %d\n",ws,we);
           wl=we-ws+1;
           printf("The word length is %d\n", wl);
            if(str[i]=='\0')
            {
                break;
            }
            ws=i+1;
            if(wl>max)
            {
                max=wl;
            }

        }
       i++;
    }while(1);
    printf("The max value is %d",max);
    
    return 0;
}