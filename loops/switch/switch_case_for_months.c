#include<stdio.h>
int main()
{
    int mon,day;

    printf("Enter month number \n");
    scanf("%d",&mon);

    if(mon>=12 || mon<=1)
    {
        printf("Invalid input \n");

    }

    switch(mon)
    {
       case(2):
        printf("There are 28 days in febuary \n");
        break;
        case(4):
        case(6):
        case(9):
        case(11):
        printf("There are 30 days");

         case(1):
         case(3):
         case(5):
         case(7):
         case(8):
         case(10):
         case(12):
         printf("There are 31 days \n");

        default:
        printf("Invalid input \n");  
    }
}