#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node* next;
}
struct node* newnode=mallloc(sizeof (struct node));
newnode data=val;
newnode next=NULL;
if(front==NULL && rear ==NULL)
 front=rear=newnode;
else
{
    rear next=newnode;
    rear=newnode;
}
void dequeue()
 {
    struct node* temp;
    if(front==NULL)
     {
        printf("Queue id empty unable to perform \n");
     }
    else
    {
        temp=front;
        front=front next;
        if(front==NULL)
        rear=NULL;
        free(temp);
    }
 }