#include <stdio.h>

int main(void)
{
    char name[50];
    char dept[5];
    int num;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter you department: ");
    scanf("%s", dept);

    printf("Enter your favourite number: ");
    scanf("%d", &num);

    printf("Hello %s from %s!\n", name, dept);
    printf("Your favourite number is %d, which is awesome.\n", num);

    return 0;
}
