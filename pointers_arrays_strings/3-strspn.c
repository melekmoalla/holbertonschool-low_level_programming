#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s:char
 * @acceplt:char
 * Return: z
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int z;

	for (z = 0; s[z] != '\0'; z++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[z] == accept[i])
			{
				break;
			}
		}
		if (!accept[i])
		{
			break;
		}
	}
	return (z);
}
