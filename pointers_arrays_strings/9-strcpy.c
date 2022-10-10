#include "main.h"

/**
 * strcpy -  copies the string pointed to by src
 *@src: string
 *@dest: string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	b = strlen(src);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
