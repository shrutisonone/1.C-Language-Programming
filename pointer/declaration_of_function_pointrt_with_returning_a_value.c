#include<stdio.h>
int main()
{
    int digitsum(int); 
    int num,res;
    
    int (*a)(int);   //function   pointer
    a=digitsum;
    
    printf("Enter a number \n");
    scanf("%d",&num);

    res=(*a)(num);         //function call
    printf("The result is %d",res);

    return 0;
}

int digitsum(int s)

{
   int tot=0;
    while(s>0)
    {
     tot=tot+s%10;
    s/=10;
    }
    return tot;

}
    