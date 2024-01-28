    #include<stdio.h>
    int main()
    {
    int i;
    int n;
    int x;
    int sv;

    printf("Enter the size of the element \n");
    scanf("%d",&n);

    int arr[n];
     
    printf("Enter the elements of the array ");
    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
            }
        }
    }
    printf("The sorted array is arr[%d] is %d",i,arr[i]);
    
    printf("Enter the value to be searched \n");
    scanf("%d",&sv);

    int l=0;
    int r=n;
    int mid=l+r/2;

    for(i=0;i<n;i++)
    {
      if(mid==sv)
      {
        break;
      }
      if(mid>)
    }
        return 0;
    }