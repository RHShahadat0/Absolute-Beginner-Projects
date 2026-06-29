#include <stdio.h>
//Trying out switch statements
//This code prints out day based on user input
//s = saturday, (capital) S = sunday, m = monday, t = tuesday, w = wednesday, (capital) T = thursday, f = friday
int main(void)
{
    char day;
    printf("s = saturday, (capital) S = sunday, m = monday, t = tuesday, w = wednesday, (capital) T = thursday, f = friday \n");
    printf("Enter the first letter of today based on the guide above: ");
    scanf("%c", &day);

    switch (day)
    {
        case 's' : printf("Saturday");
                break;
        case 'S': printf("Sunday");
                break;
        case 'm' : printf("Monday");
                break;
        case 't' : printf("Tuesday");
                break;
        case 'w' : printf("Wednesday");
                break;
        case 'T' : printf("Thursday");
                break;
        case 'f' : printf("Friday");
                break;
        default : printf("Not a valid day");
    }
    return 0;
}
