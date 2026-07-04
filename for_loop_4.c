// This program displays n terms of natural numbers and their sum using function

#include <stdio.h>

void counter(int);

int main(void)
{
    int num;
    printf("Enter how many natural numbers to use: ");
    scanf("%d", &num);

    counter(num);

    return 0;
}


void counter(int x)
{
    int sum = 0;

    printf("The first %d natural number are: \n", x);

    for (int i = 1; i <= x; i++)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("The Sum of Natural Numbers upto %d terms : %d", x, sum);
}
