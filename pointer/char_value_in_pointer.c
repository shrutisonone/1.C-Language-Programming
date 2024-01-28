#include<stdio.h>

void main()
{
    char  p='A';
    char *q;

    q=&p;

    printf("%c \n",p);  //A

    printf("%d \n",p);   //65

    printf("%u \n",&p);   //adress

    printf("%c  \n",*(&p));  //A

    *q=*q+32;   

    printf("%c \n",*q);   //a
     
    printf("%d \n",*q);   //97

}