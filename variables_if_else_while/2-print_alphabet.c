#include <stdio.h>
/**
 *main - main print all lower characters
 *
 *
 * Return: 0
 */
int main(void)
{
    char ch;

    printf("\n\nLower case characters:\n");
    for (ch = 'a'; ch <= 'z'; ch++)
        printf("%c ", ch);

    return 0;
}