// This program will print number from 1 to user specified number using function

#include <stdio.h>

void counter(int);

int main(void)
{
    int num;

    printf("Enter a number you want to count upto: ");
    scanf("%d", &num);

    counter(num);

    return 0;
}

void counter(int num)
{
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }
}
