#include <stdio.h>

void year_checker(int a);

int main(void)
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    year_checker(year);

    return 0;
}

void year_checker(int a)
{
    if (a % 400 == 0)
    {
        printf("%d is a leap year.\n", a);
    } else if (a % 100 == 0)
    {
        printf("%d is not a leap year.\n", a);
    } else if (a % 4 == 0)
    {
        printf("%d is a leap year.\n", a);
    } else
    {
        printf("%d is not a leap year.\n", a);
    }
}
