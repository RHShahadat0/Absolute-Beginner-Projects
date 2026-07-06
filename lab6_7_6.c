/*
   This program takes input of the lengths of the three sides of the triangle and returns what type of triangle it is
*/

#include <stdio.h>

int is_valid_triangle(double a, double b, double c);

int main(void)
{
    double side1, side2, side3;
    int output;

    printf("Enter three side lengths: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    output = is_valid_triangle(side1, side2, side3);

    if (output == 0)
    {
        printf("Not a valid triangle.\n");
    } else
    {
        if (side1 == side2 && side2 == side3)
        {
            printf("Equilateral triangle.\n");
        } else if(side1 == side2 || side2 == side3 || side1 == side3)
        {
            printf("Isosceles triangle.\n");
        } else
        {
            printf("Scalene triangle.\n");
        }
    }


    return 0;
}

int is_valid_triangle(double a, double b, double c)
{

    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        return 1;
    } else
    {
        return 0;
    }
}
