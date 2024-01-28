#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *p[5];
    int i;
    int pos;
    char q[50];
    char *temp;

    printf("Enter a string \n");
    gets(q);
    
    for(i=0;i<5;i++)
    {
        printf("City name\n");
        gets(q);
    }
    int n =strlen(q)+1;
    
    *(p+i)=(char*)malloc(n*sizeof(char));

    for(i=0;i<4;i++)
    {
        pos=i;
        for(int j=0;j<5;j++)
        {
            if(strcmp(p[j],p[pos])<0);
            {
             pos=j;
            }
        }
        if(i!=pos)
        {
             *temp=*(p+i);
            *(p+i)=*(p+pos);
            *(p+pos)=*temp;
        }
    }
    printf("|N LIST \n");
    for(i=0;i<5;i++)
    {
        puts(*(p+i));
    }

    return 0;
}