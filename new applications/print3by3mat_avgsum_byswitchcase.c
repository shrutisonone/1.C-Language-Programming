#include<stdio.h>
#include<conio.h>

void avgsum()
{
    int num;
    int i;
    int sum=0;
    int avg;
    int arr[10];

     printf("Enter a 10 numbers ");
     
     for(int i=0;i<10;i++)
     {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
     }
    printf("The sum is %d\n",sum);
    avg=sum/10;
    printf("The average is %d\n",avg);

}

void matrix()
{
     int a[3][3];
     printf("enter a matrix\n");

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
    
}

int  main()
{
   int a[3][3];
   void matrix();
   matrix();
   printf("asdfsadf\n");

   void avgsum();
   avgsum();


    return 0;
}