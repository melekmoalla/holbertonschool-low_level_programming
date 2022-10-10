#include "main.h"

/**
 * swap_int - swap two number
 * @a :int
 * @b :int
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}
