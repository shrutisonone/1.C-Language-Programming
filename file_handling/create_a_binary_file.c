#include<stdio.h>
#include<stdlib.h>

struct binfile
{
    int n1,n2,n3;
};
int main()
{
    int n;
    struct binfile num;
    FILE *binfile;
    binfile=fopen("binf.bin","wb");
    if(fopen("binf.bin","wb")==NULL)
    { 
       printf("Error in opening file \n");   
       exit(0); 
    }
    for(int i=1;i<5;i++)
    {
        printf("%d",i);
        num.n1=n;
        num.n2=5*n;
        num.n3=5*n+1;
        fwrite(&num,sizeof(struct binfile),1,binfile);
    }
    fclose(binfile);
    return 0;

}