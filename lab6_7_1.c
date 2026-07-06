/*
   This program will read one integer and print whether it is positive, negative or zero.
*/

#include <stdio.h>

void checker(int);

int main(void)
{
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    checker(num);

    return 0;
}

void checker(int x)
{
    if (x > 0)
    {
        printf("%d is Positive. \n", x);
    } else if (x < 0)
    {
        printf("%d is Negative. \n", x);
    } else
    {
        printf("%d is Zero. \n", x);
    }
}
