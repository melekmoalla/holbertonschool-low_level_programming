#include "main.h"

/**
 * jack_bauer - write the clock
 * Return: ch : i
 */

void times_table(void)
{
    int n;
    int i;
    int d;

    for (n = 0; n < 10; ++n)
    {

        for (i = 0; i < 10; i++)
        {
            d = (n * i);
            if ((d / 10) > 0)
            {
                _putchar((d / 10) + '0');
            }
            else
            {
                _putchar((d % 10) + '0');
            }
            {
                if (i < 9)

                    _putchar(',');
                _putchar(' ');
            }
        }

        _putchar('\n');
    }
}
