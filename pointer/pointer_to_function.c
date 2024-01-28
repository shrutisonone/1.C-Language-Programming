/*

void display()  function display
void (*a)();    ptr(to function)declaration
a=display;      assign function address to a
(*a)();         function call by pointer
return;

*/
#include<stdio.h>
#include<stdlib.h>

int display()
{
    printf("Hello");
    return 0;
}

int table()
{
    int i=1;
    int n;

    printf("Enter a number \n");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d \t %d \t =%d\n",i,n,i*n);
    }
    return 0;
}
void main()
{
   int display();
   int table();
   void (*a)();

   int opt;

   printf("\n Message 1 \n Table 2 \n Exit 3 \n Choose any Option \n");
   scanf("%d",&opt);#include<stdio.h>

int main()
{
 int (*a)[3];
 int i,j;
 int n;
 int tot;


 printf("Enter student count \n");
 scanf("%d",&n);

 a=(int*)malloc(n*sizeof(int));

 for(i=0;i<n;i++)
 {
    printf("Student number %d ,\n Enter mark \n");
    for(j=0;j<n;j++)
    {
        scanf("%d",*(a+i)+j);
    }
 }
 //printin result 

 for(i=0;i<n;i++)
 {
    printf("Student number %d ,\n Enter mark \n");
    for(j=0,tot=0;j<n;j++)
    {
        scanf("%d",*(*(a+i)+j));
    }
    printf("total=%d",tot);
 }
 free(a);

    return 0;
}

   if(opt>2)
   {
    return;
   }
   else if(opt==1)
   {
    a=display();
   }
   else
   {
     a=table();
     (*a)();
   }
   
   return;
}