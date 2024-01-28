#include<stdio.h>
#include<conio.h>

int main()
{
    
    int operand1;
    int operand2;
    int flag=0;
   

    if(flag==0)
    {
      printf("Enter an operand1  \n");
      scanf("%d",&operand1);
      flag=1;
    }
    else
    {
       printf("Invalid Operand 1 \n");
    }

        printf("Enter an operator to perform following calculations \n");
    printf("1/'+' for adddition \n 2/'*' for multiplication \n 3'-' for substraction \n 4\'/' for division \n 5 for exit \n");
    char op=getch();

    if(flag=1)
    {
        printf("Enter an operand2  \n");
        
        scanf("%d",&operand2);
      flag=0;
    }
    else
    {
        printf("invalid operand 2 \n");
    }

    
    switch(op)
    {
     case('+'):
      printf("The sum of the numbers is %d ",operand1+operand2);
      break; 
     case('*'):
      printf("The Product of the numbers is %d ",operand1*operand2);      
      break;
     case('-'):
      printf("The Substraction of the numbers is %d ",operand1-operand2);      
      break;
     case('/'):
      printf("The Division of the numbers is %d ",operand1/operand2);      
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