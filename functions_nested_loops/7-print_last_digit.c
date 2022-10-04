#include "main.h"

/**
 *print_last_digit - print the last digit
 * @i: int
 * Return: i
 */

int print_last_digit(int i)
{
	int lastdigit;

	lastdigit = i % 10;
	if (lastdigit < 0)
	{
		lastdigit *= -1;
	}
	_putchar('0' + lastdigit);
	return (lastdigit);
}