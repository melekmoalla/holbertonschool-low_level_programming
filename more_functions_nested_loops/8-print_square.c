#include "main.h"

/**
 * print_square - print'#'
 * @size: int
 */

void print_square(int size)
{
	int i;
	int c;

	for (i = 1; i <= size; i++)
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
