#include<stdio.h>

void main()
{
    FILE *f1;
    int num;
    char name[90];
    double mark;
   
    f1=fopen("formatrec.txt","w");

    printf("Enter Data\n");
    while(1)
    {
        printf("Roll number\n");
        scanf("%d",&num);
        if(num==0)
        {
            break;
        }
        printf("Name \n");
        scanf("%s",&name);
        printf("Marks\n");
        scanf("%lf",&mark);

        fprintf(f1,"%d.%s.%lf\n",num,name,mark);
    }
    fclose(f1);
    return;

}