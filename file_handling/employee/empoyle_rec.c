#include<stdio.h>
#include"emp.h"

void update(EMP *a,int num)
{
    a->eno=num;
    printf("Name\n");
    scanf("%s",a->ename);
    do
    {
        printf("Enter salary\n");
        scanf("%d",a->esal);
    }while(a->esal>=0);

}

void display(EMP a)
{
    printf("The employeee number %d\n",a.eno);
    printf("The employee name %s \n",a.ename);
    printf("the employee salary %d \n",a.esal);
}
void main()
{
    void update(EMP *a,int n);
    void display(EMP a);
}