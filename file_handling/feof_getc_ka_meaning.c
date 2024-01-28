#include<stdio.h>

int main()
{
    FILE *fp=fopen("test.txt","w");
    int ch=getc(fp);

    while(ch!=EOF)
    {
        putchar(ch);
        ch=getc(fp);
    }
    if(feof(fp))
    {
        printf("\n End of file reached\n");
    }
    else
    {
        printf("\n Something Went Wrong\n");
    }
    fclose(fp);
   
    getchar();
    return 0;
}