#include<stdio.h>

int stack[100],n,top,x,i;

void push(void);
void pop(void);
void show(void);

int main()
{
    top=-1;
    printf("Enter the size of stack");
    scanf("%d",&n);
    void push();
    void pop();
    

}

void push()
{
    if(top>=n-1)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter the value to be pushed");
        scanf("%d",&x);

        top=top+1;
        stack[top]=x;
    }
    void pop()
    {
        if(top<=-1)
        printf("Stack is empty");
        else
        {
            printf("the popped element is %d",stcak[top]);
            top=top-1;
        }
    }
    void show()
    {
        if(top>=0)
        {
            printf("elements are ");
            for(i=0;i<n;i++)
                printf(" stack[%d] -> %d",i,stack[i]);
        }
        else 
            {
                printf("the stack is empty ");
            }
        }
    }
}