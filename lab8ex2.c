#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Stop");
        break;
    case 2:
        printf("Ready");
        break;
    case 3:
        printf("Go");
        break;
    default:
        printf("Not a valid number");

    }

    return 0;
}
