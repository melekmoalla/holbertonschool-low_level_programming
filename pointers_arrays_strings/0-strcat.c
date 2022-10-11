#include "main.h"

/**
 * *_strcat -  copies the string src in dest
 *@src: string
 *@dest: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[a + i] = src[i];

	return (dest);
}

