#include<stdio.h>
#include"emp.h"

void main()
{
    int num;
    FILE *f1;
    EMP a;

    f1=fopen("emp.dat","rb");

    printf("Record\n");

    while(1)
    {
        fscanf(&a,sizeof(a),1,f1);
        if(feof(f1))
        {
            break;
        }
        display();
    }
    fclose(f1);
    return;
    
}