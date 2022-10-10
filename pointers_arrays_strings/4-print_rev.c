#include "main.h"

/**
 * _puts - write a paragraph
 *@str: string
 */
void print_rev(char *s)
{
    int i;
    int b;

    b = strlen(s);
    i = b;

    while (s[i] >= 0)
    {
        _putchar(s[i]);
        i--;
    }
    printf("\n");
}