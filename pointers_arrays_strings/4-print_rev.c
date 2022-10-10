#include "main.h"

/**
 * print_rev - write  a paragraph rev
 *@s: char
 */
void print_rev(char *s)
{
	int i;
	int b;

	b = strlen(s);
	i = b;

	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	printf("\n");
}
