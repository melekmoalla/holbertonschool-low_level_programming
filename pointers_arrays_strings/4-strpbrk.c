#include "main.h"

/**
 * *_strpbrk -  function that locates a substring.
 * @s:char
 * @accept:char
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int z;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[i] == accept[z])
				return (s + i);
		}
	}

	return (0);
}
