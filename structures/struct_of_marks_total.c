#include<stdio.h>
#include<conio.h>

struct marks
{
    int rollnum;
    int mrk[5];
};

void main()
{
   int tot=0;
   int i;
   struct marks r;
   printf("Enter Roll number \n");
   scanf("%d",&r.rollnum);
   for(i=1;i<6;i++)
   {
    printf("Enter marks for %d subject = ",i);
    scanf("%d",&r.mrk[i]);
   }

   clrscr();

   for(i=1;i<6;i++)
   {
    printf("%5d\n",r.mrk[i]);
    tot=tot+r.mrk[i];
    printf("TOTAL is %d",tot);
   }
   printf("The total of marks is %d",tot);

    return;
}