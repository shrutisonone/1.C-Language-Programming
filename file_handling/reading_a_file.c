//program to open write and close a file

#include<stdio.h>
#include<string.h>

void main()
{
    FILE *yr;

    char datatbrd[50]="reading geeksforgeeks blah";

    yr=fopen("readfile.txt","r");

    while(fgets(datatbrd,50,yr)!=NULL)
    {
        printf("%s",datatbrd);
    }
    fclose(yr);
    printf("Data stored successfully\n");
   return;

}
//fputs (<variable_name>,<file_name>);