#include "main.h"

/**
 * *string_nconcat - writes the character c to stdout
 *s@s1: char
 *@s2: char
 * @n: int
 * Return: p
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;
	unsigned int l;
	unsigned int s;
	unsigned int b = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	l = strlen(s1);
	s = n + l;

	p = malloc(sizeof(char) * s + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l; i++)
	{
		*(p + i) = *(s1 + i);
	}

	for (j = i; j < s; j++)
	{

		*(p + j) = *(s2 + b);
		b++;
	}
	j++;
	*(p + j) = '\0';

	return (p);
}
