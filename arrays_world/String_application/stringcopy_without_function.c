#include<stdio.h>
int main()
{
    char  p[100];
    char  q[100];
    int i;
 

    printf("Enter the source string \n");
    gets(p);
    for( i=0;p[i]!='\0';i++)
    {
       q[i]=p[i];
       if(q[i]=='\0')
       break;
    }
    puts(p);
    puts(q);

    return 0;
}

//using of 32 or '\0' like 
/*
if(p[i]=='\0')
       {
        q[i]==' ' || 32 
       }
       
       
       gives output as 
       hi ÿ¿■a
       */

//using break gives output 
/*
if(p[i]=='\0')
{
    break;
}

hi helloÆ~Zv
*/