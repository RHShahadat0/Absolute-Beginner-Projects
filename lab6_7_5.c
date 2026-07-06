/*
   This program checks if a letter is a vowel or consonant
*/

#include <stdio.h>

char classify_letter(char c);

int main(void)
{
    char letter, result;

    printf("Enter a lowercase letter: ");
    scanf("%c", &letter);

    result = classify_letter(letter);

    if (result == 'v')
    {
        printf("%c is a Vowel.\n", letter);
    }

    else
    {
        printf("%c is a Consonant.\n", letter);
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
