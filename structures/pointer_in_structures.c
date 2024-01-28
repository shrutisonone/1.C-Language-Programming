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
     struct stud *ptr=&a;
     printf("\n Roll no:");
     scanf("%d",&ptr->rollno);
       printf("\n Name ");
       scanf("%s",&ptr->name);
        printf("\n Marks");
        scanf("%d",&ptr->mrk);
    
    printf("\n Student Data \n");
    printf("Roll no is :%d \t",ptr->rollno);
    printf("Name  is :%s \t",ptr->name);
    printf("Mark is :%d \t",ptr->mrk);

    return 0;
}