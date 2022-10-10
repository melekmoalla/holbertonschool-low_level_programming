#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src
 *@src: string
 *@dest: string
 */

char *_strcpy(char *dest, char *src)
{
	size_ i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
