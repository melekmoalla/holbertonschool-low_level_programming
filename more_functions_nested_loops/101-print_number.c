#include "main.h"

/**
 * print_number - print all the number
 * @n: int
 */

void print_number(int n)
{
	unsigned int s = n;
	int a = 1;

	if (n < 0)
	{
		_putchar('-');
		s = -s;
	}
	while ((s / a) >= 10)
	{
		a *= 10;
	}
	while (a != 0)
	{
		_putchar((s / a) + '0');
		s = s - (s / a) * a;
		a = a / 10;
	}
}
