#include<stdio.h>

void input(int *a,int n)
{ 
    int i;
    printf("enter the array elements \n");
    for(i=0;i<5;i++)
    scanf("%d",(a+i));
}

void display(int* b,int n)
{ 
    int i;
    for(i=0;i<5;i++)
   {
    printf("%d \n",*(b+i));   //if simply b+i then it gives the address  but if*(b+i) it gives value at adress
   }
}



void main()
{
    int x[5];
    int i=0;

    void input(int*,int);
    void display(int*,int);

    input(x,5);
    
    display(x,5);

}





















































// #include<stdio.h>

// void inputarr(int x)
// {
//     int i;
//     int arr[5];
//     scanf("%d",arr+i);
//     i++;
    
// }
 
// void displayarr(int y)
// {
//     int arr[5];
//     int i;
//    printf("%d",arr+i);
//    i++;
// }

// void main()
// {
//     int i;
//     int arr[5];

//     int *x;
//     int *y;

//     x=(arr+0);
//     y=(arr+0);

//     printf("Enter array elements \n");
//     for(i=0;i<5;i++)
//     {
//         inputarr(*x);
//     }

//     for(i=0;i<5;i++)
//     {
//         displayarr(*y);
//     }
// }