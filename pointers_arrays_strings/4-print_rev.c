#include "main.h"

/**
 * print_rev - write  a paragraph rev
 *@s: char
 */
void print_rev(char *s)
{

	int b;
	int i;

	b = strlen(s) - 1;

	for (i = b; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	printf("\n");
}
