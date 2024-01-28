#include<stdio.h>
int main()
{
    char a[100];
    int lc=0;
    int uc=0;
    int dc=0;
    int oc=0;

    printf("Enter string\n");
    gets(a);
    printf("String input was \n");
    puts(a);

    for(int i=0;a[i]!='\0';i++)
    {
      if(a[i]>=97 && a[i]<=122)
      {
        lc++;
      }
      else 
      {  
          if(a[i]>=65 && a[i]<=90)
         {
           uc++;
         }
          else
          {
            if(a[i]>=49 && a[i]<=57)
            {
               dc++;
            }
            else
            {
                oc++;
            }
          }
      }
    }
    
    printf("The count of lower case is %d ,upper case is %d ,Digit count is %d and other count is %d",lc,uc,dc,oc);

    return 0;    
}