#include "main.h"

/**
 * print_line - print'_'
 * @n: int
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n > 0)
			_putchar('_');
		i++;
	}
	_putchar('\n');
}
