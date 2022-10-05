#include "main.h"

/**
 * times_table - write the clock
 * Return: 0
 */

void times_table(void)
{
	int n;
	int i;
	int d;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			d = (n * i);
			if (d != 0)
			{
				if (d != 0 && d <= 9)
				{
					printf(",  ");
				}
				else if (i <= 9)
				{
					printf(", ");
				}
			}
			else if (i > 0)
			{
				printf(",  ");
			}
			printf("%d", d);
		}
		printf("\n");
	}
}
