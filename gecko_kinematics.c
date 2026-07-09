/* This program calculates the distance a gecko travels. */

#include <stdio.h>

int main(void)
{
    double distance, velocity, acceleration, time;

    printf("Enter the velocity: "); // Asks the user for velocity
    scanf("%lf", &velocity);

    printf("Enter the acceleration: "); // Asks the user for acceleration
    scanf("%lf", &acceleration);

    printf("Enter the required time: "); // Asks the user for time
    scanf("%lf", &time);

    distance = velocity * time + (.5 * acceleration * time * time);

    printf("The gecko's traveled distance is: %.3lf", distance);

    return 0;
}
