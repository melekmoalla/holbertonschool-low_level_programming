#include "main.h"

/**
 * print_diagonal - print'\'
 * @n: int
 */

void print_diagonal(int n)
{
	int a;
	int d;
	int i;
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			d = n - a;
			c = n - d;
			for (i = 1; i <= c; i++)
			{
				if (i < c)
					_putchar(' ');
				else
					_putchar(92);
			}

			_putchar('\n');
		}
	}
}

