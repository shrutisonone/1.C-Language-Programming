#include<stdio.h>
#include<string.h>
int main()
{
    char string[]="Jerry",string2[]="Ferry";
    int i,j,k;
    i=strcmp(string,"Jerry");
    j=strcmp(string,string2);  //numeric difference between ascii code
    k=strcmp(string,"Jerryboy"); //ascii value of null character minus ascii value of of space.
    printf("%d  %d  %d  \n",i,j,k);
    return 0;
}