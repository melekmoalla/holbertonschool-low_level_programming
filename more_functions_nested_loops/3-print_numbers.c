#include "main.h"

/**
 * print_numbers - write number
 */

void print_numbers(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
