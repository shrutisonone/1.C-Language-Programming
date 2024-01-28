#include<stdio.h>

void main()
{
    int a=50;
    int *b;
    int **c;
    b=&a;
    c=&b;

    printf(" %d \n",a);  //50

    printf(" %u \n",&a);  //adress

    printf(" %d \n",*(&a));   ///50

    printf(" %d \n",&b);     //6243

    printf(" %d \n",*(*(&b)));  //50
 
    printf(" %u \n",c);    //50me tula thamb nhi mhannar ,me kunhaala force nhi karu shkt bilkul pan n

    printf(" %d \n",*c);    //50

    printf(" %d \n",*(*c));   //50
 
    printf(" %d \n",*(*(*(&c))));  //50


}