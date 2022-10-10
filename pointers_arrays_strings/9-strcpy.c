#include "main.h"

/**
 *_strcpy -  copies the string pointed to by src
 *@src: string
 *@dest: string
 */

char *_strcpy(char *dest, char *src)
{
	int b;
	int i;

	b = strlen(src);

	for (i = 0; i < b && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < b; i++)
		dest[i] = '\0';

	return (dest);
}
