#include "main.h"

/**
 * set_bit -  that sets the value of a bit to 0 at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 or (-1 if is fail)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k = 1, a = 0;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if (*n == 0)
		return (0);
	while (a < index)
	{
		k *= 2;
		a++;
	}
	*n -= k;
	return (1);
}
