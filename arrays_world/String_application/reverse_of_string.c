#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    int ws=0;
    int we=0;
    int temp;
     
    printf("Enter the string\n");
    gets(str);
    printf("The string entered is ");
    puts(str);

    do
    { 
        if(str[i]==32||str[i]=='\0')
        {
           we=i-1;
           printf("The word start is %d and word end is %d\n",ws ,we);

           //swap  of string
           while(ws<we)
           {
            temp=str[ws];
            str[ws]=str[we];
            str[we]=temp;
            ws++;
            we--;
           }

           if(str[i]=='\0')
            {
                break;
            }
            ws=i+1;
        }
       i++;
    }while(1);
    
    puts(str);
    return 0;
}

/*
for(i=0;str[i]!='\0';i++)
        {
            temp=str[ws];
            str[ws]=str[we];
            str[we]=temp;
            ws++;
            we--;
            puts(str);
        }
         

            printf("The reversed string is %s",str[i]);
        */