#include<stdio.h>
int main()
{

            int q;
            int i;
            int sv;
            int size;
            int freqarr[50];
        
            printf("Enter the size of the array \n");
            scanf("%d",&size);
            int arr[size];
            printf("Enter the elements for the array \n");
            for(i=0;i<size;i++)
            {
                scanf("%d",&arr[i]);
            }
            for(i=0;i<50;i++)
            {
                freqarr[i]=0;
                printf("%d", freqarr[i]);
            }
            printf("\n");
            int tmp=0;
            for(i=0;i<size;i++)
            {
                tmp=arr[i];
                freqarr[tmp]++;
                
            }
            
            for(i=0;i<50;i++)
            {
                printf("%d", freqarr[i]);
            }
            
            while(q--)
            {
                scanf("%d", &sv);
                printf("%d", freqarr[sv+1]);
            }
            
    return 0;
}








