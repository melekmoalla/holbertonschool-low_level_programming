#include "main.h"

/**
 * *_calloc - writes the character c to stdout
 *@nmemb: unsigned int
 *@size: unsigned int
 * Return: p
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
