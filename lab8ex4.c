#include <stdio.h>

double apply_discount(double price, int type);

int main(void)
{
    double price, final_price;
    int type;

    printf("Enter the price: ");
    scanf("%lf", &price);

    printf("Enter type: ");
    scanf("%d", &type);

    final_price = apply_discount(price, type);

    if (final_price == 0)
    {
        printf("Invalid type");
    } else
    {
        printf("Final price = %.2lf\n", final_price);
    }

    return 0;
}

double apply_discount(double price, int type)
{
    switch(type)
    {
    case 1:
        price = price - (price * 0.05);
        return price;
    case 2:
        price = price - (price * 0.10);
        return price;
    case 3:
        price = price - (price * 0.15);
        return price;
    case 4:
        price = price - (price * 0.20);
        return price;
    default:
        return 0;
    }
}
