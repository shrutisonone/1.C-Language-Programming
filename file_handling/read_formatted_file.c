//read_formatted_file
#include<stdio.h>

void main()
{
    int num;
    char name[90];
    double mark;

    FILE *f1;
    f1=fopen("formatrec.txt","r");

    if(f1==NULL)
    {
        printf("File not found\n");
        return;
    }
    printf("Record\n");

    while(1)
    {
        fscanf(f1,"%d%s%lf",num,name,mark);
        if(feof(f1))
        {
            break;
        }
        printf("%5d %15s %6.2lf",num,name,mark);
    }
    fclose(f1);
    return;
}