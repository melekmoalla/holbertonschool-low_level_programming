#include "main.h"

/**
 * get_endianness - returns the number of bits  from one number to another
 * Return: (int)*c
 */

int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *)&x;

	return ((int)*c);
}
