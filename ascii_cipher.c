/* This program will ask the user to enter a single uppercase letter and it will
add 5 to its ascii value and print both the new letter and its integer value
*/

#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a single uppercase letter: ");
    scanf("%c", &ch);

    ch = ch + 5;
    printf("New character: %c\n", ch);
    printf("Character's ASCII value: %d\n", ch);

    return 0;

}
