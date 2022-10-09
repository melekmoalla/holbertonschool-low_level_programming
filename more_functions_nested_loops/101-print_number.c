#include "main.h"

/**
 * print_number - print all the number
 * @n: int
 */

void print_number(int n)
{
	int a;
	int b;
	int c;

	if (n >= 1000)
	{
		_putchar((n / 1000) + '0');
		c = (n / 1000) * 1000;
		b = n - c;
		_putchar((b / 100) + '0');
		b = (n / 100) * 100;
		a = n - b;
		_putchar((a / 10) + '0');
	}
	else if (n >= 100)
	{
		_putchar((n / 100) + '0');
		b = (n / 100) * 100;
		a = n - b;
		_putchar((a / 10) + '0');
	}
	else if (n >= 10)
	{
		_putchar((n / 10) + '0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');
}
