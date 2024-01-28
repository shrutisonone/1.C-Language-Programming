#include<stdio.h>
#include<conio.h>

int main()
{
    
    int num1;
    int num2;
    int flag=1;

   
    printf("Enter an operator to perform following calculations \n");
    printf("1/'+' for adddition \n 2/'*' for multiplication \n 3'-' for substraction \n 4\'/' for division \n 5 for exit \n");
    char op= getch();

    
    printf("The operator choosen is %c \n",op);
    printf("Enter two numbers \n");
    scanf("%d%d",&num1,&num2);

    switch(op)
    {
     case('+'):
      printf("The sum of the numbers is %d ",num1+num2);
      break; 
     case('*'):
      printf("The Product of the numbers is %d ",num1*num2);      
      break;
     case('-'):
      printf("The Substraction of the numbers is %d ",num1-num2);      
      break;
     case('/'):
      printf("The Division of the numbers is %d ",num1/num2);      
      break;
     default:
        flag=0;
    }
    if(flag=0)
    {
        printf("not a valid case \n");
    }

    return 0;
}