#include <stdio.h>
// this program detects if a character is upper case or lower case
int main(void)
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("You have entered a lower case letter");
    }else if (ch >= 'A' && ch <= 'Z')
    {
        printf("You have entered an upper case letter");
    }else
    {
        printf("Not a valid letter");
    }
    return 0;
}
