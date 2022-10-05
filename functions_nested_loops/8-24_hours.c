#include "main.h"

/**
 * jack_bauer - write the clock
 * Return: ch : i
 */

void jack_bauer(void)

{
	int ch;
	int i;

	for (ch = 0; ch <= 23; ch++)
	{

		for (i = 0; i <= 59; i++)
		{
			_putchar(ch / 10 + '0');
			_putchar(ch % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');
		}
	}
}
