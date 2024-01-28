#include<Stdio.h>
int main()
    {
        int x;
        int dig;
        int dig2;

        printf("Enter a number \n");
        scanf("%d",&x);
         
         do
         {
            printf("Enter a number \n");
            scanf("%d",&dig2);
            
         }
         while(dig2>=0 && dig2<=9);
         {
            while(x>0)
            {
                 
            
            dig=x%10;
            if(dig2==dig)
            {
               printf(" digit found \n");
               break;

            }
            else 
            {
                x\=10;
            }
            }

            if(x==0)
            {
                printf("Not found \n");
            }
            else 
            {
                printf("Found \n");
            }
            
            
         }
         return 0;
    }

