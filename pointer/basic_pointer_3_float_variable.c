#include<stdio.h>

void main()
{
    float a=9.4;
    float *b;
    b=&a;
    
    printf("\n %f",a);   //9.4

    printf("\n %u",&a);   //6243....

    printf("\n %f",*(&a));   //9.4

    printf("\n %u",b);   //6234

    printf("\n %u",&b);   //6235
 
    printf("\n %f",*(*(&b)));  //9.4
            /*      *(*(6235)
                   *(6234)
                    9.4
                   */  

    printf("\n %f",*b);  //6234 heyy chukla maja 
    


    return;
}