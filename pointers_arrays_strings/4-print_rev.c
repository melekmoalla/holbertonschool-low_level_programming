#include "main.h"

/**
 * print_rev - write  a paragraph rev
 *@s: char
 */
void print_rev(char *s)
{
	
	int b;

	b = strlen(s) - 1;
	

	while (s[b] <= 0)
	{
		_putchar(s[b]);
		b--;
	}
	printf("\n");
}
