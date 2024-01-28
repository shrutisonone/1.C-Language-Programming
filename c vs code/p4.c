#include<stdio.h>
#include<conio.h>
void main()
{
    int i,item,mid,first,last,N,loc;
    int a[15];
    printf("Enter number of elements");
    scanf("%d",&N);
    printf("Enter the elements");
    for(i=0;i<N;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Enter the item to be searched");
    scanf("%d",&item);
    first=0;
    last=N-1;
    mid=(first+last/2);
    while(first<=last && a[mid]==item)
     {
        if(a[mid]>item)
         last=mid-1;
        else
         first=mid+1;
        mid=(first+last/2);
     }
    if(a[mid]==item)
    {
        loc=mid+1;
    
        printf("%d is found at %d location ",item,loc);
    }
    else
    {
        loc=0;
    }
    getch();
}
