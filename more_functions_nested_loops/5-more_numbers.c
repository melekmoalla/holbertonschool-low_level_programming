#include "main.h"

/**
 * print_most_numbers - exept 2 and 4
 */

void more_numbers(void)
{
    int i;
    int c;

    for (i = 0; i <= 10; i++)
    {
        for (c = 0; c <= 14; c++)
        {
            if (c >= 10)
            {
                _putchar(c / 10 + '0');
            }
            _putchar(c % 10);
        }
        _putchar('\n');
    }
}
