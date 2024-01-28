#include<stdio.h>
#include"book.h"

void main()
{
    int pos=1;
    
}

int search(int num)
    {
        int i=0;
        while(i<=pos)
        {
            if(a[i].bno==no)
            {
                break;
            }
            else
            {
                i++;
            }
        }
        return (i>pos?-1:i);
    }

    //function to add 
void add
{
    int res,no;
    if(pos=-9)
    {
        printf("No room for Insertion\n");
        return;
    }
    printf("Enter the Book number \n");
    scanf("%d",&no);
    res=search(no);
    if(res>=0)
    {
        printf("REcord Exist\n");
    }
    else
    {
        pos++;
        update(&a[pos],no);
        printf("Record Added\n");
    }

    
}