
#include "main.h"

/**
 * print_alphabet - print alphabet
 * @ch: int
 * Return: ch
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
