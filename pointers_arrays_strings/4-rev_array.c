#include "main.h"

/**
 * reverse_arrayt - swap many number in arry
 * @a :int
 * @n :int
 */

void reverse_array(int *a, int n)
{
	int size;
	int i;
	int temp;

	size = n - 1;

	for (i = 0; i < size; i++, size--)
	{
		temp = a[i];
		a[i] = a[size];
		a[size] = temp;
	}
}
