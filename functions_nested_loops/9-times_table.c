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
	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			d = (n * i);
			if (d != 0)
			{
				if (d != 0 && d <= 9)
				{
					printf(",  ");
				}
				else
				{
					printf(", ");
				}
			}
			else
			{
			}
			{
				printf("%d", d);
			}
		}
		printf("\n");
	}
}