#include<stdio.h>
#include<string.h>

int main()
{
    char p[100];
    char q[100];
    int i,j;
    printf("Enter a string which is a source string  \n");
     gets(p); 
    printf("Source string before reverse \n");
    puts(p);

    j=strlen(p);
    
    printf("The length of string is %d \n",j);
    for(i=0;i<j;i++)
    {
           if(p[i]>=97 && p[i]<=122)
           {
            q[i]=p[i]-32;
           }
           else if(p[i]==32)
           {
            q[i]=p[i];
           }
    }
    q[i]='\0';
    puts(p);
    puts(q);

    return 0;
}