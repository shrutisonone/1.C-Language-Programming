#include<stdio.h>

void main()
{
    int x=10; //stores value 
    int *y;   //stores address0

    y=&x;

    printf("\n %d",x);     //10

    printf("\n %u",&x);     //64243..

    printf("\n %d",*(&x));    //10

    printf("\n %u",y);     //6242...

    printf("\n %u",*(&y));    //64345

    printf("\n %u",*(*(&y)));  //10

    printf("\n %u",&y);      //adress of y
    *y=*y+10;

    printf("\n %d",x);      //value + 10 

    printf("\n %d",y);     //value + 10
   /*
   *y mhnaje value at the address which is present in y 
   ata y madhe ahe 646 
   646 vr kay value ahe 50 
   tr print honar 50
   */
}