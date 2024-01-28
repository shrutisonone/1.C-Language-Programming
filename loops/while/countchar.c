#include<stdio.h>
#include <conio.h>
int main()
{
    int n=1;
    int lc=0;
    int uc=0;
    int dc=0;
    int oc=0;
    char a;

    while(n<=10)
    {
    
        a=getch();
        printf("Received Input: %c\n", a);
        if(a>='A' && a<='Z')
        {
         uc++;
        }
        else
        {
            if(a>='a' && a<='z')
            {
              lc++;
            }
            else
            {
                if(a>='0' && a<='9')
                {
                   dc++;
                }
                else
                {
                 oc;
                }

            }

        }
        n++;
    }
    printf("The count od uppercase is %d , of lowercase is %d,of digit is %d and other is %d",uc,lc,dc,oc);
    return 0;
}