#include "main.h"

/**
 * *malloc_checked - writes the character c to stdout
 * @b: unsigned int
 * Return: p
 */

void *malloc_checked(unsigned int b)
{

	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
