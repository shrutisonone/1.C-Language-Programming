#include<stdio.h>
int main()
{
    int i;
    int max;
    int arr[5];
    int pos=0;

    for(i=0;i<5;i++)
    {
      printf("Enter the elements for array \n");
      scanf("%d",&arr[i]);
      if(arr[i]>max)
      {
        max=arr[i];
        pos=i;
      }
    } 
    printf("The maximum element is %d at position arr[%d] \n",max,pos);
    return 0;
}