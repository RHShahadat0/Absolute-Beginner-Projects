// This program calculates total sum of natural numbers using user input in a function

#include <stdio.h>

void sum(int);

int main(void)
{
    int num = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    sum(num);

    return 0;
}

void sum(int x)
{
    int total= 0;
    for (int i = 1; i <= x; i++)
    {

        total = total + i;
    }
    printf("Sum of %d natural numbers is %d \n", x, total);
}
