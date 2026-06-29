//This program if two inputs are of the same value or not
//Both the input data are numbers

#include <stdio.h>

int main(void)
{
    int num_1, num_2;
    printf("Enter the first number: ");
    scanf("%d", &num_1);

    printf("Enter the second number: ");
    scanf("%d", &num_2);

    if (num_1 == num_2)
    {
        printf("Number 1 and Number 2 are equal");
    }else
    {
        printf("Numbers are not equal");
    }
    return 0;
}
