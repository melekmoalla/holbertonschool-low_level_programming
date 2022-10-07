#include "main.h"

/**
 * print_line - print'#'
 * @size: int
 */

void print_square(int size)
{
	int i;
	int c;

	for (i = 0; i < size; i++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}