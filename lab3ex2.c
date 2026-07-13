#include <stdio.h>

int main(void)
{
    double temp, convert;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &temp);

    convert = (9.0 / 5.0) * temp + 32;

    printf("%.2lf C = %.2lf F\n", temp, convert);

    return 0;
}
