#include<stdio.h>
int main()
{
    struct book
    {
        char name;float price;int pages;
    };
    struct book b1,b2,b3;
    printf(" enter the names and the price and the pages of the 3 books\n");
    scanf("%c %f %d",&b1.name,&b1.price,b1.pages);
    scanf("%c %f %d",&b2.name,&b2.price,b2.pages);
    scanf("%c %f %d",&b3.name,&b3.price,b3.pages);

    printf("The values you have entered is \n");
    printf("%c %f %d ",b1.name,b1.price,b1.pages);
    printf("%c %f %d ",b2.name,b2.price,b2.pages);
    printf("%c %f %d ",b3.name,b3.price,b3.pages);
}
