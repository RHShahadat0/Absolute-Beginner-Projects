#include <stdio.h>
// this program grades depending on obtained number
int main(void)
{
    int mark;
    printf("Enter your obtained number for grading: ");
    scanf("%d", &mark);

    if (mark >= 90 && mark <= 100)
    {
        printf("A+");
    }else if (mark >= 70 && mark < 90)
    {
        printf("A");
    }else if (mark >= 30 && mark < 70)
    {
        printf("B");
    }else
    {
        printf("Failed");
    }
    return 0;
}
