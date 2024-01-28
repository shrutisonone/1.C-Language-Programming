#include<Stdio.h>
int main()
    {
        int x;
        int dig;
        int dig2;

        printf("Enter a number \n");
        scanf("%d",&x);
        
        printf("Enter a number \n");
            scanf("%d",&dig2); 


         while(1)
         {
          dig=x%10;  
            if(dig==dig2)
            {
             break;
            }
            else
            {
              x=x/10;
            }
         }
        if(x==0)
        {
           printf("not found \n");
        }
        else
        {
           printf("Found \n")
        }
         return 0;
    }

