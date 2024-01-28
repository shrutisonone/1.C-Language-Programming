#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char ss[100];
    char  *ds;
    int i=0,n;

    printf("Enter the source string \n");
    gets(ss);

    n=strlen(ss)+1;

    printf("n is %d",n);

    ds=(char*)malloc(n*sizeof(char));

    while(1)
    {
        *(ds+i)=*(ss+i);
        if(*(ds+i)=='\0')
        {
           break;
        }
        i++;
    }
    
    printf("\n The destination string is \n");
    puts(ds);
    free(ds);
    
    return 0;
}



    


