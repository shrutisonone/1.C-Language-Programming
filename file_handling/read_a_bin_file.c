#include<stdio.h>
#include<stdlib.h>

struct xyz
{
  int a,b,c;
};

int main()
{
    struct xyz alpha;
    int n;

    FILE *binfile;

    binfile=fopen("binf.bin","rb");

    if(fopen("binf.bin","rb")==NULL)
    {
        printf("Error in opening the file\n");
        exit(1);
    }
    for(int i=1;i<5;i++)
    {
        fread(&alpha,sizeof(struct xyz),1,binfile);
        printf("a =%d \n b=%d \n c=%d \n",alpha.a,alpha.b,alpha.c);
    }
    fclose(binfile);
    
    return 0;
}
