/* This program takes a total amount in cents and divides them into quarters,
dimes, nickels and pennies
*/

#include <stdio.h>

int main(void)
{
    int cent, quarter, dime, nickel, penny;

    printf("Enter total amount in cents: ");
    scanf("%d", &cent);

    quarter = cent / 25;
    printf("Quarters: %d\n", quarter);
    cent = cent % 25;

    dime = cent / 10;
    printf("Dimes: %d\n", dime);
    cent = cent % 10;

    nickel = cent / 5;
    printf("Nickel: %d\n", nickel);
    cent = cent % 5;

    penny = cent ;
    printf("Pennies: %d\n", penny);

    return 0;

}
