#include "main.h"

/**
 * print_array - write  a array
 *@a: int
 *@n: int
 */

void print_array(int *a, int n)
{
	int i;

	n = n - 1;
	for (i = 0; i <= n; i++)
	{
		if (i < n)
		{
			printf("%d", (a[i]));
			printf(", ");
		}
		else
			printf("%d", (a[i]));
	}
	printf("\n");
}
