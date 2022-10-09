#include "main.h"

/**
 * print_times_table - write the number
 * @n: int
 * Return: 0
 */

void print_times_table(int n)
{
	int d;
	int i;
	int a;

	if ((n < 15) || (n < 0))
	{
		for (d = 0; d <= n; d++)
		{
			for (i = 0; i <= n; i++)
			{
				a = (d * i);

				if (a != 0)
				{
					if (a >= 100)
					{
						printf(", ");
					}
					else if (a <= 9)
					{
						printf(",   ");
					}
					else if (i <= n)
					{
						printf(",  ");
					}
				}
				else if (i > 0)
				{
					printf(",   ");
				}
				printf("%d", a);
			}
			printf("\n");
		}
	}
}