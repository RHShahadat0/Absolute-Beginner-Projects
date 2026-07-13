#include <stdio.h>

int main(void)
{
    double length, width;

    printf("Enter the length of rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of rectangle: ");
    scanf("%lf", &width);

    printf("Area = %.2lf\n", (length * width));
    printf("Perimeter = %.2lf\n", (2 * (length + width)));

    return 0;
}
