#include "main.h"

/**
 *_puts_recursion - function that prints a string
 *@s: char
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
