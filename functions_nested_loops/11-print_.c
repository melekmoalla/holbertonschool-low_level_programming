#include "main.h"
/**
 * print_to_98 - write all number to 98
 * @n: int
 * Return: all number
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{

			printf("%d", ",",
				   i);
			printf(", ");
			if (i == 98)
				printf("%d", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 99; i--)
		{

			printf("%d", i);
			printf(", ");
		}

		if (i == 98)
			printf("%d", i);
	}
	else
	{

		printf("%d", n);
	}
	printf("\n");
}
