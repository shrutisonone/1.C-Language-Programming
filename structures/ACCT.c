#include<stdio.h>

typedef struct ACCOUNT
{
    int accnum;
    char accname[90];
    int accbal;
}Acc;

//function to update accounts
void update(Acc *a,int num)
{
    int i;
    printf("Enter the account number \n");
    scanf("%d",a->accnum);
    printf("The Account holder name \n");
    scanf("%s",a->accname);
    do
    {
        printf("Opening balance\n");
        scanf("%d",a->accbal);
        if(a->accbal>=500)
        {
            break;
        }
    }while(1);
}

void display(Acc *a,int num)
{
    int i;
    printf("Account detail\n");
    printf("The accoutn number :%d",a->accnum);
    printf("Account holder name :%s",a->accname);
    printf("Account balance :%d",a->accbal);
    return;
}
