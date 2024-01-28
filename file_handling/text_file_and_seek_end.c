#include<stdio.h>
#include<stdlib.h>

int main()
{
   FILE *fs;
   fs=fopen("test.txt","r");

   fseek(fs,0,SEEK_END);
   printf("ShrutiShrutiShrutiShrutiShrutiShrutiShrutiShrutiShrutiShruti ");
   printf("ShrutiShrutiShrutiShrutiShrutiShrutiShrutiShrutiShrutiShruti ");
   printf("ShrutiShrutiShrutiShrutiShrutiShrutiShrutiShrutiShrutiShruti ");
    
   printf("%d",ftell(fs));

   return 0;
}