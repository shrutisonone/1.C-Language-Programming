#include<stdio.h>

void main()
{ 
    int arr[5];
    int *r=(arr+0);

    for(int i=0;i<5;i++)
    {
        printf("\n Enter a number \n");
        scanf("%d",(r+i));             //*r is a pointer value               //insort it is scnaf("%d",p+1)
    }
  
   printf("\nPrint Data \n");
   for(int i=0;i<5;i++)
   {
    printf("%d \t",*(r+i));
   }

}