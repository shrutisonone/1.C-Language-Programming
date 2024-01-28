#include <stdio.h>
#define MAX 21
int main()
{
    char buf[MAX];
    printf("Enter a string \n");
    fgets(buf, MAX, stdin);
    printf("string is: %s\n", buf);
  
    return 0;
}