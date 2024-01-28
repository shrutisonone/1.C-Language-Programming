#include<stdio.h>


void main()
{
    int pos=1;
    int a[90];
    int num;
    printf("enter a number \n");
    scanf("%d",&num);
    serach(num);
}

int search(int num)
    {
        int i=0;
        int a[90];
        int pos,no;
        while(i<=pos)
        {
            if(a[i].bno==no)
            {
                break;
            }
            else
            {
                i++;
            }
        }
        return (i>pos?-1:i);
    }

    //function to add 
void add()
{
    int pos;
    int res,no;
    if(pos=-9)
    {
        printf("No room for Insertion\n");
        return;
    }
    printf("Enter the Book number \n");
    scanf("%d",&no);
    res=search(no);
    if(res>=0)
    {
        printf("REcord Exist\n");
    }
    else
    {
        pos++;
        update(&a[pos],no);
        printf("Record Added\n");
    }
}

void mod()
{
    int res,no;
    if(pos==-1)
    {
        printf("No Record Exist\n");
        return;
    }
    printf("Book number \n");
    scanf("%d",&no);
    res=search(no);
    if(res==-1)
    {
        printf("Record not exist\n");
    }
    else
    {
        if(a[res].bstate==0)
        {
            printf("Record deleted Can't modify\n");

        }
        else
        {
            update(&a[res],no);

        }
    }
}

//function to display all book record

void display()
{
  int i;
  if(pos==-1)
  {
    printf("Record does not exist \n");
  }
  else
  {
    while(i<=pos)
    {
        display(a[i]);
        i++;
    }
  }
  
}

void main()
{
    int opt;
    while(1)
    {
       printf("Choose the options \n,1 Add \n2 Mod\n3 Display\n4 Delete\n5 Exit \n");
       scanf("%d",&opt);
        if(opt>5)
        {
          printf("Invalid option\n");
          break;
        }
        switch(opt)
        {
          case1:
           add();
           break;
          case2:
           mod();
           break;
          case3:
           display();
           break;
          case4:
           delrec();
           break;
        }
    }
}