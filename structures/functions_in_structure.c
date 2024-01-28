#include<stdio.h>

int main()
{
  int a;
  char str[100];

  void display(int ,char);
  void input();
  input();
  display(a,str);
  
   return 0;
}

struct fun 
{
   int number ,name;
};

void input()
{
  int num;
  char str[100];
  printf("Enter a number \n");
  scanf("%d",&num);

  printf("Enter a name\n");
  gets(str);
  
}
void display(int a,char str)
{
  printf("The number entered is %d",a);
  puts(str);
}