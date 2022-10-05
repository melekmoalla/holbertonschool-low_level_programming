#include "main.h"

/**
 * times_table - write the clock
 * Return: 0
 */

void times_table(void)
{
	int n;
	int i;
	int d;

	for (n = 0; n <= 9; ++n)
	{

		for (i = 0; i <= 9; i++)
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
