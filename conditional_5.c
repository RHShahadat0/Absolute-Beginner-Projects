#include <stdio.h>
//A program that checks if a student has passed or not
//Passing mark is 30
int main (void)
{
    int marks;
    printf("Enter your marks obtained: ");
    scanf("%d", &marks);

    if (marks <= 30)
    {
        printf("Failed");
    }else if (marks > 30 && marks <= 100)
    {
        printf("Passed");
    }else
    {
        printf("Invalid marks");
    }
    return 0;
}
