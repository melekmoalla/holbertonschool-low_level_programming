#include "main.h"

/**
 * clear_bit - function returns the number of elements in a linked list_t list
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 or (-1 if is fail)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if (*n == 0)
		return (0);
	*n = *n & ~(1 << index);
	return (1);
}
