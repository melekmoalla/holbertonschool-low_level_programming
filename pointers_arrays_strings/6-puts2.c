#include "main.h"

/**
 * puts2 - write  a paragraph by 2
 *@str: string
 */

void

puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	printf("\n");
}
