#include <stdio.h>

int days_in_month(int month);

int main(void)
{
    int month, days;

    printf("Enter the month number: ");
    scanf("%d", &month);

    days = days_in_month(month);

    if (days == 0)
    {
        printf("Invalid month.\n");
    } else
    {
        switch (month)
        {
            case 1: printf("January"); break;
            case 2: printf("February"); break;
            case 3: printf("March"); break;
            case 4: printf("April"); break;
            case 5: printf("May"); break;
            case 6: printf("June"); break;
            case 7: printf("July"); break;
            case 8: printf("August"); break;
            case 9: printf("September"); break;
            case 10: printf("October"); break;
            case 11: printf("November"); break;
            case 12: printf("December"); break;
        }
        printf(" has %d days.\n", days);
    }

    return 0;
}


int days_in_month(int month)
{
    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return 28;
    default:
        return 0;
    }

}
