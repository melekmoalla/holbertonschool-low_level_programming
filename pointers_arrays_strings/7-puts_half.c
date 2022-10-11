#include "main.h"

/**
 * puts_half - write  a half paragraph
 *@str: string
 */

void puts_half(char *str)
{
	int i;
	int n;
	int a;

	a = strlen(str);
	if (a % 2 == 0)
	{
		n = (a / 2);
	}
	else
	{
		n = (a / 2) + 1;
	}
	for (i = n; i < a; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
