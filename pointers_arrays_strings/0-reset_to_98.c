#include "main.h"

/**
 * reset_to_98 - switch to 98
 * @n :int
 */

void reset_to_98(int *n)
{
	int *p;

	p = &*n;
	*p = 98;
}
