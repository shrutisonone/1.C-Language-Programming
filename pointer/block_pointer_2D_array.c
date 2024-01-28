#include<stdio.h>

int main()
{
 int (*a)[3];
 int i,j;
 int n;
 int tot;

 printf("Enter student count \n");
 scanf("%d",&n);

 a=(int
 (*)[])malloc(n*3*sizeof(int));

 for(i=0;i<n;i++)
 {
    printf("Student number %d ,\n Enter mark \n",i);
    for(j=0;j<3;j++)
    {
        scanf("%d",*(a+i)+j);
    }
 }

 //printin result 

 for(i=0;i<n;i++)
 {
    printf("Student number %d ,\n Enter mark \n",i);
    for(j=0,tot=0;j<3;j++)
    {
        scanf("%d",*(*(a+i)+j));
        tot+=*(*(a+i)+j);
    }
    printf("total=%d",tot);
    
 }
 free(a);

    return 0;
}