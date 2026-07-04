//This program will count backward from the number user input upto 0

#include <stdio.h>

void counter(int);

int main (void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    counter(num);

    return 0;
}

void counter(int x)
{
    for (int i = x; i >=1; i--)
    {
        printf("%d \n", i);
    }
}
