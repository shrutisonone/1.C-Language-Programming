#include<stdio.h>
#include<conio.h>

int  main()
{
    int opt;
     int a[3][3];
     int sum=0;
     int avg;
    char arr[10];
    int i;

    printf("1- Print and Display the matrix of 3x3\n  2-Sum and Average of an array of 10 numbers \n");
    scanf("%d",&opt);

    switch(opt)
    {
        case 1:
            printf("Enter the elements of the matrix\n");
            for(int i=0;i<3;i++)
            {
            for(int j=0;j<3;j++)
            {
                scanf("%d",&a[i][j]);
            }
            }

            for(int i=0;i<3;i++)
            {
            for(int j=0;j<3;j++)
                {
                printf(" %d ",a[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Enter a 10 numbers \n");
            arr[10]=getch();

            for(i=0;i<10;i++)
            {
                scanf("%d",&arr[i]);
                sum=sum+arr[i];
            }
            printf("The sum is %d\n",sum);
            avg=sum/10;
            printf("The average is %d\n",avg);
            break;
        case 3:
           printf("EXIT \n");
           break;
    }
   


    return 0;
}