#include "main.h"

/**
* *_memcpy -  function that copies memory area.
* @dest: char
* @src: char
* @n: int
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a = (char *)dest;
	const char *b = (const char *)src;

	if ((a != NULL) && (b != NULL))
	{
		while (n)
		{
			*(a++) = *(b++);
			--n;
		}
	}
	return (dest);
}
