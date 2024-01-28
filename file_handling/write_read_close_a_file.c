//program to open write and close a file

#include<stdio.h>
#include<string.h>

void main()
{
    FILE *yr;

    char datatbwrten[50]="geeksforgeeks blah blah blah";

    yr=fopen("writereadfile.txt","w");

    if(yr==NULL)
    {
        printf("File not created\n");
        return;
    }
    else
    {
        printf("File opened\n");

        if(strlen(datatbwrten)>0)
        {
            fputs(datatbwrten,yr);
            fputs("\n",yr);
        }
        fclose(yr);
        printf("Data stored successfully\n");
    }

   return;

}
//fputs (<variable_name>,<file_name>);