#include<stdio.h>
#include<stdlib.h>

struct result
{
    int rollnum;
    int tot;
    int avg;
    int *ptr;
};

struct mark
{
    int rollnum;
    int mark;
    int nos;
    int *ptr;
};

void input_mark(struct mark *a)
{
    int i;
    printf("Enter roll number \n");
    scanf("%d",a->rollnum);
    printf("Enter student count \n");
    scanf("%d",a->nos);
    a->ptr=(int*)malloc(sizeof(int ));
    printf("Enter marks\n");
    for(i=0;i<a->nos;i++)
    {
        scanf("%d",&a->ptr+i);
    }
    return;
}

void display_mark(struct mark *a)
{
    int i;
    int tot=0;
    printf("Roll number %d\n",a->rollnum);
    printf("Student count %d",a->nos);
    printf("Marks :\n");
    for(i=0;i<a->nos;i++)
    {
        printf("%d",a->ptr+i);
        tot+=a->ptr[i];
    }
    printf("Total is %d",tot);
    printf("Average is %d",tot/a->nos);
    return;
}

void display_result(struct result *b,struct mark *a)
{
    b->rollnum=a->rollnum;
    int i,tot=0;
    for(i=0;i<a->nos;i++)
    {
       b->ptr[i]=a->ptr[i];
       tot=tot+b->ptr[i];
    }
    b->tot=tot;
    b->avg=tot/a->nos;
    return;
}

void main()
{
    struct mark p;
    struct result q;
    void input_mark( &p);
    void display_mark(&p);
    void display_result (&q,&p);
    free(p.ptr);
    return;
}