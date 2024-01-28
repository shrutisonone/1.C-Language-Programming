#include<stdio.h>

int main()
{
int n;
int count=0;
int i=1;
int flag=1;
int dig=0;
int fact=1;
int tot=0;
int choice;
int rev=0;
int temp;
int stop;
do
{
  

printf("\n The Menu card contains \n1 for entering a number\n2 for Tabels\n3 for DigitSum\n4 for Reverse\n5 for Palindrome\n6 for Factorial\n7 for Prime\n8 for Exit \n");
scanf("%d",&choice);

switch(choice)
{
    case 1:
    printf("Enter a number \n");
    scanf("%d",&n);
    flag=1;
    break;

    default:
    if(flag==0)
    {
    printf("The Input is invalid \n");
    continue;
    }
    
    switch(choice)
    {
        case 2:
        printf("Enter a number \n");
        scanf("%d",&n);
        printf("The number is %d\n",n);
            if(n>0)
            {
              for(int i=1;i<=10;i++)
              {
                printf(" %d\t x\t%d\t=%d \n",n ,i,n*i);
              }
            }
              break;
        case 3:
            printf("Enter a number \n");
            scanf("%d",&n);
            printf("The number is %d\n",n);
             do{

              dig=n%10;
              if(dig>0)
               {
                tot=tot+dig;
               }
               n=n/10;
             }while(n>0);
              printf("The Digit Sum is %d  \n",tot);
             break;
        case 4:
             printf("Enter a number \n");
             scanf("%d",&n);
            printf("The number is %d\n",n);
            do{
             dig=n%10;
             rev=rev*10+dig;
             n=n/10;
            }while(n>0);
             printf("The reverse of the digit is %d \n",rev);
             break;
        case 5:
            printf("Enter a number \n");
              scanf("%d",&n);
            printf("The number is %d \n",n);
            for(rev=0;n>0;n=n/10)
             {
             dig=n%10;
             rev=rev*10+dig; 
             }
             temp=n;
             if(temp==rev)
             {
             printf("It is a palindrome \n");
             }
             else
             {
               printf("it is not a palindrome \n ");
             }
             break;
        case 6:
             printf("Enter a number \n");
            scanf("%d",&n);
            printf("The number entered is %d\n",n);
             for(fact=1;n>0;n--)
             {
                fact=fact*(n);
             } 
             printf("The factorial of the number is %d \n",fact);
             break;
        case 7:
            printf("Enter a number \n");
            scanf("%d",&n);
            printf("The number entered is %d\n",n);
            for( stop=n/2;i<=stop;i++)
            {
                if(n%i==0)
                {
                    break;
                }
            }
                if(i>stop)
                {
                    printf("It is a prime number \n");
                }
                else
                {
                  printf("Not a prime number \n");
                }
                break;
            case 8:
                printf("THE EXIT\n");
                break;
            
            
            }
            }
              
} while (choice>0);
return 0;
}

