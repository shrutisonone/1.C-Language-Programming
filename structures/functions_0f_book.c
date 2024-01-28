#include<stdio.h>
#include"book.h"

struct book
{
    char b.name[80];
    int b.price;
    int b.state;
    int b.num;
};

void update(Book *a,int n)
{
    a->b.num=num;
    printf("Book name \n");
    scanf("%s",a->b.name);
    printf("Book price\n");
    scanf("%d"a->b.price);
    a->state=1;
}

void dispaly(Book a)
{
    printf("Book Data\n");
    printf("Name %s\nBook number:%d\nBook Price:\nState:%s",b.name,b.num,b.price,(b.state)?"Valid":"Invalid");
}
void delrec(Book *a)
{
    a->b.state=0;
}

void main()
{
    Book a;
    update(&a,101);
    display(a);
    delrec(&a);
    display(a);
}