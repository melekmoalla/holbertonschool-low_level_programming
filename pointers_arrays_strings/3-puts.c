#include "main.h"

/**
 * _puts - write a paragraph
 *@str: string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	printf("\n");
}

