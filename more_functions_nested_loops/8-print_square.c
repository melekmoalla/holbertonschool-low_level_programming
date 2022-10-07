#include "main.h"

/**
 * print_square - print'#'
 * @size: int
 */

void print_square(int size)
{
	int i;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
