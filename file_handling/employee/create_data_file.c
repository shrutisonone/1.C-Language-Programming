#include<stdio.h>
#include"emp.dat"
#include"emp.h"

//create data file
void main()
{
    FILE *datfile;

    datfile=fopen("emp.dat","wb");

    int num;
    EMP a;
    
    while(1)
    {
    if(datfile==NULL)
    {
        printf("File not found \n");
        break;
    } 
    printf("Enter DATA\n");
    printf("Enter emplyee number \n");
    scanf("%d",&num);
    if(num==0)
    {
        break;
    }
    update(&a,num);
    }
    fwrite(&a,sizeof(a),1,datfile);
    fclose(datfile);
    return;
}
