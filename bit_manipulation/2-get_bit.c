#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index
 * @index: unsigned int
 * @n: unsigned long int
 * Return: index
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (n != 0)
	{
		index = (n >> index) & 1;
		return (index);
	}
	return (-1);
}
