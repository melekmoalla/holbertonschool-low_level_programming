#include "main.h"

/**
 * print_number - print'#'
 * @n: int
 */

void print_number(int n)
{
	if (n <= 0)
	{

		printf("%d", n / 10);
		n = n * -1;
		printf("%d", n % 10);
	}
	else
	{
		if (n > 9)
		{
			printf("%d", n / 10);
		}
		printf("%d", n % 10);
	}
	printf("\n");
}
