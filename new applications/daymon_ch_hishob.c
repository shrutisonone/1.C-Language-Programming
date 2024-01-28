#include<stdio.h>

int daymon()
{
    int mon_num;
    int num;

    printf("Enter a month number \n");
    scanf("%d",&mon_num);

    if(mon_num==4 || mon_num==6 || mon_num==9 || mon_num==11)
    {
        num=1;
    }
    else if(mon_num==2)
    {
        num=2;
    }
    else
    {
        num=3;
    }

    return num;
}

void main()
{
    int daymon();
    
    switch(daymon())
    {
    case 1:
     printf("the month has 30 days \n");
     break;
    case 2:
     printf("The month has 28 days \n");
     break;
    case 3:
     printf("The month has 31 days \n");
     break;
}
}

/*
yacha dusr alogic asa

if(mon_num<1 || mon_num>12)
{
    return 1;
}
else if(mon_num==2)
{
    return 2;
}
else if(mon_num=4,6,8,11)
{
    retunr 3;
}




*/