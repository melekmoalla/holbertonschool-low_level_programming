#include "main.h"

/**
 * rev_string - write  a paragraph rev
 *@s: string
 */

void

puts2(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i+=2;
    }
    printf("\n");
}
