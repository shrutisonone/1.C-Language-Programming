#include<stdio.h>

struct stud 
{
   char name[50];
   int rollno;
};

void main()
{
    
    int rollno;

    struct stud a;

    printf("Enter name \n");
    scanf("%s",&a.name);
    printf("Enter roll number \n");
    scanf("%d",&a.rollno);

    printf("Name :- %s\t",a.name);
    printf("Roll no. :- %d",a.rollno);

    return;
}