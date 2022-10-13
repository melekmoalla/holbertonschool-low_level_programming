#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * Return: e
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int a;
	unsigned int b;
	unsigned int z;
	unsigned int e = 0;

	a = strlen(s);
	b = a = strlen(accept);

	for (i = 0; i <= a; i++)
	{
		for (z = 0; z <= b; z++)
		{
			if (s[i] == accept[z])
			{
				e += 1;
			}
		}
	}
	return (e);
}
