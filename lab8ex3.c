#include <stdio.h>

int main(void)
{
    char grade;

    printf("Enter a grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Good\n");
        break;
    case 'C':
        printf("Fair\n");
        break;
    case 'D':
        printf("Pass\n");
        break;
    case 'F':
        printf("Fail\n");
        break;
    default:
        printf("Invalid remark\n");
    }


    return 0;
}
