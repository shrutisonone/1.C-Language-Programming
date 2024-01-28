#include<stdio.h>
int main()
{
    int n;
    int fact;  //0 ch factorial 1 ahe apn base condition 1 consider keli ahe .

    printf("Enter a number \n");
    scanf("%d",&n); 
    fact=n;
    do
    {    
        fact=fact*(n-1);
        printf("fact is %d \n ",fact);
        n--;
         printf("n value is %d \n",n);
    }while(n>1);

    printf("The factorial is %d",fact);
    return 0;
}
