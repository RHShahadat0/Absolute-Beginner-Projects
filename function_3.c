// This program will determine if a number is even or odd using function

#include <stdio.h>

void even_odd(int);

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    even_odd(number);

    return 0;
}

void even_odd(int number)
{
    if (number % 2 == 0)
    {
        printf("%d is an even number", number);
    } else
    {
        printf("%d is an odd number", number);
    }
}
