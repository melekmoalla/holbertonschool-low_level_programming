#include "main.h"

/**
 * puts2 - write  a paragraph by 2
 *@str: string
 */

void puts_half(char *str)
{
    int i;
    int b;
    int a;

    a = strlen(str) - 1;
    if (a % 2 == 0)
    {
        b= a / 2;
    }
    else
    {
        b= (a + 1) / 2;
    }
    for (i = b; i <= a; i++)
    {
        printf("%c", str[i]);
    }
    _putchar('\n');
}
