#include<stdio.h>
#include<string.h>

int main()
{
    char p[100];
    char q[100];
    int i=0,j;
    char temp;

    printf("Enter a string which is a source string  \n");
     gets(p); 
    printf("Source string before reverse \n");
    puts(p);

    j=strlen(p);
    
    printf("The length of string is %d \n",j);
    /*
    for(i=0;p[i]!='\0';i++,j--)
    {
       temp=p[i];
       q[j]=temp;
       printf("The q string is %c \n",q[j]);
    }
    printf("The q string is %s",q);
    q[i]='\0';

    for(i=0;q[i]!='\0';i++)
    {
      printf(" %c \n",q[i]);
    }  
    */
    j--;
    while(p[i]!='\0')
    {
       q[j]=p[i];
       i++;
       j--;

    }
    q[i]='\0';

    puts(q);
    puts(p);

    return 0;
}