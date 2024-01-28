#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int num1;
    int num2;

   
    printf("Enter an operator to perform following calculations \n");
    printf("1/'+' for adddition \n 2/'*' for multiplication \n 3'-' for substraction \n 4\'/' for division \n 5 for exit \n");
    char op=getch();
    prinf("The operator choosen is %c",op);
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
      printf("The Substraction of the numbers is %d ",num1+num2);      
      break;
     case('/'):
      printf("The Division of the numbers is %d ",num1+num2);      
      break;
     default:
     printf("enter a valid operator \n");
    }

    return 0;
}