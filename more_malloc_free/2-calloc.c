#include "main.h"

/**
 * *_calloc - writes the character c to stdout
 *@nmemb: unsigned int
 *@size: unsigned int
 * Return: p
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *ptr;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
