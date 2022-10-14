#include "main.h"

/**
 *print_diagsums - calcul diagonal
 *@a: int
 *@size: int
 */

void print_diagsums(int *a, int size)
{

	int i;
	int s = 0;
	int pos;
	int r;
	int m = 0;

	for (i = 0; i < size; i++)
	{
		pos = (i * size) + i;
		s += *(a + pos);
	}
	for (i = 1; i <= size; i++)
	{
		r = (size - 1) * i;
		m += *(a + r);
	}
	printf("%d", s);
	printf(",");
	printf(" ");
	printf("%d", m);
	printf("\n");
}
