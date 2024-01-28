#include<stdio.h>
#include<conio.h>
void main()
{
    int i,N,max,LOC;
    int arr[100];
    printf("Length of array is ");
    scanf("%d",&N); 
      for(i=0;i<N;i++)
     {
        //Enter elements in array
        scanf("%d",&arr[i]);
     }
     max=arr[0];
     for(i=1;i<N;i++)
      {
        if(arr[i]>max)
        {
            max=arr[i];
            LOC=i+1;
        }
      }
      printf("The largest number of array is %d at %d position ", max,LOC);
      getch();

}