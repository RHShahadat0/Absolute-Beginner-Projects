#include <stdio.h>

void num_checker(int a, int b, int c);

int main(void)
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    num_checker(num1, num2, num3);

    return 0;
}

void num_checker(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the largest number.\n", a);
        } else
        {
            printf("%d is the largest number.\n", c);
        }
    } else if (b > c)
    {
        printf("%d is the largest number.\n", b);
    } else
    {
        printf("%d is the largest number.\n", c);
    }
}

