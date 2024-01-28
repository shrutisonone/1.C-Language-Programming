#include<stdio.h>
#include<stdlib.h>

int main()
{
    int na=0;
    int ne=0;
    int ni=0;
    int no=0;
    int nu=0;
    int nothr=0;
    char alpha;
     
    for(int i=1;i<=10;i++)
     {
     char alpha=getch();
     printf("Enter a alphabet \n",alpha);

    switch(alpha)
     {
    case('a'):
    case('A'):
        na++;
        break;
    case('E'):
    case('e'):
        ne;
        break;
    case('I'):
    case('i'):
        ni;
        break;
    case('O'):
    case('o'):
        no++;
        break;
    case('U'): 
    case('u'):
        nu;
        break;
    default:
        nothr++;
    }

    }
    
    printf("The a vowels count is %d \n  ",na);
    printf("The e vowels count is %d \n  ",ne);
    printf("The i vowels count is %d \n  ",ni);
    printf("The o vowels count is %d \n  ",no);
    printf("The u vowels count is %d \n  ",nu);
    printf("The other alphabets  count is %d \n  ",nothr);


     return 0;
}
