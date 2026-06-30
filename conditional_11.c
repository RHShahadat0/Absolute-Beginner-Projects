//This program checks in which quadrant a point lies

#include <stdio.h>

int main(void)
{
    int point_1, point_2;

    printf("Enter a point to check which quadrant it is from (separated by a comma): ");
    scanf("%d, %d", &point_1, &point_2);

    if (point_1 > 0 && point_2 > 0)
    {
        printf("The point (%d, %d) is in the 1st quadrant\n", point_1, point_2);
    } else if (point_1 < 0 && point_2 > 0)
    {
        printf("The point (%d, %d) is in the 2nd quadrant\n", point_1, point_2);
    } else if (point_1 < 0 && point_2 < 0)
    {
        printf("The point (%d, %d) is in the 3rd quadrant\n", point_1, point_2);
    } else if (point_1 > 0 && point_2 < 0)
    {
        printf("The point (%d, %d) is in the 4th quadrant\n", point_1, point_2);
    } else
    {
        printf("The point (%d, %d) lies on an axis or the origin\n", point_1, point_2);
    }
    return 0;
}
