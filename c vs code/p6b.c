#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node*next;
};
first,*nw;
int search(int);
void main()
{
    int num,i, item,pos;
    clrscr();
    first.next=NULL:
    nw=&first;
    printf("Enter the number you want to search in linked list");
    scanf("%d",&num);
    printf("\n");
    for(i=0;i<num;i++)
    {
        nw->next=(struct node*)malloc(sizeof(struct node));
        printf("Enter element in node %d",i+1);
        nw=&first;
        while(nw->next!=NULL)
        {
            printf("%d "nw->data);
            nw=nw->next
        }
    }
}