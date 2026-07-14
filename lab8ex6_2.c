#include <stdio.h>

int days_in_month(int month, int year);



int main(void)
{
    int month, days, year;

    printf("Enter the month number: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    days = days_in_month(month, year);

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


        printf(" of %d has %d days.\n",year, days);
    }

    return 0;
}


int days_in_month(int month, int year)
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
        if (year % 400 == 0)
    {
        return 29;
    } else if (year % 100 == 0)
    {
        return 28;
    } else if (year % 4 == 0)
    {
        return 29;
    } else
    {
        return 28;
    }
    default:
        return 0;
    }

}


