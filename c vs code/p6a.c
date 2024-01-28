#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
void linkedlisttraversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element %d ",ptr->data);
        ptr=ptr->next;
    }

}
int main()
{
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    //allocate memory for nodes in linked list in heap

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    //link 1st to 2nd nodes
    head->data=7;
    head->next=second;

    //link 2nd to 3rd node
    second->data=11;
    second->next=third;

    //link 3rd to 4th node
    third->data=41;
    third->next=fourth;

    //link 4th to 5th 
    fourth->data=66;
    fourth->next=NULL;
    

    linkedlisttraversal(head);
    return 0;
}