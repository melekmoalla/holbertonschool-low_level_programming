#include "main.h"

/**
 * *_strcat -  copies the string src in dest
 *@src: string
 *@dest: string
 *@n: int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = strlen(dest);
	int i;

	for (i = 0; (i < n) && src[i] != '\0'; i++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] = '\0';

	return (dest);
}
