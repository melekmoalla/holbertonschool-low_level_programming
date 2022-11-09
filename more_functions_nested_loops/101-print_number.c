#include "main.h"

/**
 * print_number - print all the number
 * @n: int
 */

void print_number(int n)
{
	unsigned s = n;
	int a = 1;

	if (n < 0)
	{
		putchar('-');
		s = -s;
	}
	while ((s / a) >= 10)
	{
		a *= 10;
	}
	while (a != 0)
	{
		putchar((s / a) + '0');
		s = s - (s / a) * a;
		a = a / 10;
	}
	putchar('\n');
}
