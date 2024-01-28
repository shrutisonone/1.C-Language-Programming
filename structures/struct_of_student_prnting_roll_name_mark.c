#include<stdio.h>

struct stud
{  

   int rollno;
   char name[90];
   int mrk;
   
};

int main()
{
     struct stud a;
     printf("\n Roll no:");
     scanf("%d",&a.rollno);
       printf("\n Name ");
       scanf("%s",&a.name);
        printf("\n Marks");
        scanf("%d",&a.mrk);
    
    printf("\n Student Data \n");
    printf("Roll no is :%d \t",a.rollno);
    printf("Name  is :%s \t",a.name);
    printf("Mark is :%d \t",a.mrk);

    return 0;
}