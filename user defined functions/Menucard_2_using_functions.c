#include<stdio.h>


void main()
{
    void prime();
    void table();
    void digitsum();
    void reverse();

    int opt;
    
    while(1)
    {
    printf("\nMENU \n 1]Prime\n2]Table\n3]Digitsum\n4]Reverse\n5]Exit\n");

    printf("Enter the option number \n");
    scanf("%d",&opt);
     if(opt>=5)
     {
        break;
     }

    printf("Option selected is %d\n",opt);
    switch(opt)
    {
        case(1):
          
          prime();
          break;
        case(2):
          
          table();
          break;
        case (3):
          
          digitsum();
          break;
        case (4):
         
          reverse();
          break;
    }
    }
}

void prime()
{
    int i=1;
    int num;
    int count;
    int stop;
    
    printf("Enter a number \n");
    scanf("%d",&num);

   for(stop=num/2,i=2;i<=num;i++)
   {
    if(num%i==0)
    {
        break;
    }
   }
    if(i>stop)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not a Prime number \n");
    }
    return ;
}

void table()
{
    int i;
    int num;
    
    printf("Enter a number \n");
    scanf("%d",&num);
    
    for(i=1;i<=10;i++)
    {
      printf("%d\tx\t%d\t=%d\n",num,i,num*i);
    }

}

void digitsum()
{
    int i;
    int dig=0;
    int num;
    int sum=0;

    printf("Enter a number \n");
    scanf("%d",&num);

    while(num>0)
    {
        dig=num%10;
        sum=sum+dig;
        num=num/10;
    }
    printf("The sum is %d",sum);
}

void reverse()
{
    int rev=0;
    int i;
    int num;
    int dig;

    printf("Enter a number \n");
    scanf("%d",&num);

    while(num>0)
    {
        dig=num%10;
        rev=rev*10+dig;
        num=num/10;
    }
    printf("The Reverse of the numbe is %d",rev);
    
}

