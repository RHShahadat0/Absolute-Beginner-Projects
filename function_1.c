
// This program converts temperature from Celsius to Fahrenheit using a custom function


#include <stdio.h>

double celsius_to_fahrenheit(double);

int main(void)
{
    double temp;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &temp);

    printf("%.2lf degrees Celsius is %.2lf degrees Fahrenheit\n", temp, celsius_to_fahrenheit(temp));
    return 0;
}

double celsius_to_fahrenheit(double c)
{
    double convert;
    convert = (9.0 / 5.0) * c + 32;

    return convert;
}
