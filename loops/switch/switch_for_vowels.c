#include<stdio.h>
int main()
{
    char alpha;
    int t;

  printf("Enter a aplhabet \n");
        scanf("%c",&alpha);

   switch(alpha)
   {
    case(65):
    case(97):
    case('E'):
    case('e'):
    case('I'):
    case('i'):
    case('O'):
    case('o'):
    case('U'): 
    case('u'):
     printf("It is a vowel \n");
     break;
    default:
    printf("Not a vowel \n");
   }
return 0;
}

/*

 for(t=1;t>=10;t++)
    {
        printf("Enter a aplhabet \n");
        scanf("%c",&alpha);
    }
  if(alpha>=122 || alpha>=97 && alpha>=90 || alpha<=65)
  {
    printf("Invalid input \n");
  }

*/
 