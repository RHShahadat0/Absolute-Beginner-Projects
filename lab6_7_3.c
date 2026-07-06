/*
   This program prints if a year is leap year or not
*/

#include <stdio.h>

void checker(int);

int main(void)
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    checker(year);

    return 0;
}

void checker(int x)
{
    if (x % 400 == 0)
    {
        printf("%d is a leap year. \n", x);
    } else if (x % 100 == 0)
    {
        printf("%d is not a leap year. \n", x);
    } else if (x % 4 == 0)
    {
        printf("%d is a leap year. \n", x);
    } else
    {
        printf("%d is not a leap year. \n", x);
    }
}
