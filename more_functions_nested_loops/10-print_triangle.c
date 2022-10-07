#include "main.h"

/**
 * print_triangle - print'#'
 * @size: int
 */

void print_triangle(int size)
{
	int a;
	int d;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			d = size - a;
			for (i = 1; i <= size; i++)
			{
				if (i <= d)
					_putchar(' ');
				else
					_putchar('#');
			}

			_putchar('\n');
		}
	}
}
