#include<stdio.h>
int main()
{
  char n;
  printf("Enter a character \n");
  scanf("%c",&n);
  if(n>=97 && n<=102)
  {
     printf(" Hexa-aplhabet \n");
  }
  else
  {
    if(n>=49 && n<=57)
    {
        printf("Hexa-Digit \n");
    }
    else 
    {
    printf("Other  \n");
    }
  }
  return 0;
}