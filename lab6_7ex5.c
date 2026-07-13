#include <stdio.h>

char classify_letter(char c);

int main(void)
{
    char c, ch;


    printf("Enter a lowercase letter: ");
    scanf("%c", &c);

    ch = classify_letter(c);

    if (ch == 'v')
    {
        printf("%c is a Vowel.\n", c);
    } else
    {
        printf("%c is a Consonant.\n", c);
    }

    return 0;
}


char classify_letter(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 'v';
    } else
    {
        return 'c';
    }
}
