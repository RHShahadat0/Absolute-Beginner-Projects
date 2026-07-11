/* This program will use a function to check if a number is even or odd without
using the modulo operator
*/

#include <stdio.h>

int is_even(int n);

int main(void)
{
    int num, result;

    printf("Enter a number to see if it is even or odd: ");
    scanf("%d", &num);

    result = is_even(num);

    if (result == 1)
    {
        printf("Number is even.\n");
    } else
    {
        printf("Number is odd.\n");
    }

    return 0;
}

int is_even(int n)
{
    if ((n / 2) * 2 == n)
    {
        return 1;
    } else
    {
        return 0;
    }
}

