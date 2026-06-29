//This program will check if a given number is even or odd

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number to see if it is even or odd: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is an even number", num);
    }else
    {
        printf("%d is an odd number", num);
    }
}
