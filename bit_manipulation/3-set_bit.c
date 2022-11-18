#include "main.h"

/**
 * set_bit - function returns the number of elements in a linked list_t list
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 or (-1 if is fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k = 1, a = 0;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	while (a < index)
	{
		k *= 2;
		a++;
	}
	*n += k;
	/*or *n^=(1<<index);*/
	return (1);
}
