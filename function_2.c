
// This program uses a custom function to calculate the distance between two points


#include <stdio.h>
#include <math.h>

double calculate_distance(double x1, double y1, double x2, double y2);

int main(void)
{
    double x_1, x_2, y_1, y_2;

    printf("Enter coordinates for Point 1 (x1, y1) (comma separated): ");
    scanf("%lf, %lf", &x_1, &y_1);

    printf("Enter coordinates for Point 2 (x2, y2) (comma separated): ");
    scanf("%lf, %lf", &x_2, &y_2);

    printf("The distance between points is %lf\n", calculate_distance(x_1, y_1, x_2, y_2));

    return 0;
}

double calculate_distance(double x1, double y1, double x2, double y2)
{
    double distance;
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return distance;
}
