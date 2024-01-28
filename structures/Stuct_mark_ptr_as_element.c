#include<stdio.h>
#include<stdlib.h>
struct mark
{
    int rollnum;
    int mrk;
    int *ptr;
    int nos;
};

void main()
{
    struct mark m1;
    int i,nos;
    printf("Enter the roll number \n");
    scanf("%d",&m1.rollnum);
    printf("Enter the student count \n");
    scanf("%d",&m1.nos);
    printf("Enter the marks\n");
    m1.ptr=(int*)malloc(sizeof(int));
    for(i=0;i<m1.nos;i++)
    {
        scanf("%d",&m1.ptr[i]);
    }
    int tot=0;
    for(i=0;i<m1.nos;i++)
    {
        printf("%d\n",m1.ptr[i]);
        tot+=m1.ptr[i];
    }
    printf("Average = %d",tot/m1.nos);
    return;
}