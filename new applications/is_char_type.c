#include<stdio.h>

int ischar()
{
    char ch;
    int no;
    printf("Ente r a character  \n");
    scanf("%c",&ch);
     
    if(ch>=97 && ch<=122)
    {
        no=1;
    }
    else if (ch>=65 && ch<=90)
    {
        no=2;
    }
    else if (ch>=49 && ch<=57)
    {
        no=3;
    }
    else
    {
        no=4;
    }
    
    return no;
}

void main()
{
    int ischar();
     
    switch(ischar())
    {
        case 1:
           printf(" LOWER CASE\n");
           break;
        case 2:
           printf(" UPPER CASE\n");
           break;
        case 3:
           printf("DIGIT CHARACTER\n");
           break;
        case 4:
           printf("OTHER \n");
           break;
    }  

}