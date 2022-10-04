#include "main.h"

/**
 * main - print 10 line
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;

	int ch;

	for (i = 1; i <= 10; i++)
	{

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	};
}
