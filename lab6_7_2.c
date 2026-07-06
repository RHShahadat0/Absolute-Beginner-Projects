/*
   This program will take three integers and print the largest of the three.
*/

#include <stdio.h>

void reader(int, int, int);

int main(void)
{
    int num_1, num_2, num_3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num_1, &num_2, &num_3);

    reader(num_1, num_2, num_3);

    return 0;
}


void reader(int x, int y, int z)
{

    if (x > y)
    {
        if (x > z)
        {
            printf("The largest number is %d. \n", x);
        } else
        {
            printf("The largest number is %d. \n", z);
        }
    } else if (y > z)
    {
        printf("The largest number is %d. \n", y);
    } else
    {
        printf("The largest number is %d. \n", z);
    }

}
