#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three values \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
      if(a>c)
       {
            printf("The greatest value is %d",a);  // a>b && a>c 
       }
       else
       {
            printf("The greatest value is %d",c); //a>b c>a
       }
    }
    else
    {
       if(b>c)
       {
           printf("The greatest value is %d",b);  //b>a && b>c
       }
       else
       {
          printf("The greatest value is %d",c); //b>a && c>b

       }
    }
    return 0;
}