#include<stdio.h>

struct Laptop
{
    char Name[50];
    char model[50];
    int product_number;
};

int main()
{
    struct Laptop L1={ "Asus Tuf","GTX 1650",123456};

    printf("%s\t%s\t%ld",L1.Name,L1.model,L1.product_number);

    return 0;
}