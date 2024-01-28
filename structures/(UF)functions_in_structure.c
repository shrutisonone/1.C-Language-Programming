#include<stdio.h>
#include<stdlib.h>

struct point 
{
  char name[50];
  int srnum;
};

int main()
{
  struct point k;
  void input(&k);
  void display(k);

  return 0;
}

void input(struct point *ptr)
{
  printf("Enter the name \n");
  scanf("%s",&ptr->name);
  printf("Enter the serial number \n");
  scanf("%d",*&ptr->srnum);
}

void display(struct point k)
{
  printf("Name is %s",ptr->k.name);
  pritnf("The serial number is %d",ptr->k.srnum);
}