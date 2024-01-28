#include<stdio.h>

typedef struct account
{
    int acnum;
    char acname[90];
    int acopbal;
    int state;
}accnt;

FILE *acc;

void update(accnt *a,int num)
{
    int num;
    accnt a;
    a->acnum=num;
    printf("Enter name\n");
    scanf("%s",a->acname);
    do
    {
        printf("Open bal ");
        scanf("%d",&a->acopbal);
        if(a->acopbal<=500)
        {
            break;
        }
        a->state=1;
    }while(1);
    fclose(acc);
    return;
}