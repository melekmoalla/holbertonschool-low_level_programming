#include "main.h"

/**
 * *string_nconcat - writes the character c to stdout
 * @s1: char
 * @s2: char 
 * @n: int
 * Return: p
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, j;
	int l;
	int s;
	int b = 0;

	if (s1 == 0)
	{
		s1 = "";
	}

	if (s2 == 0)
	{
		s2 = "";
	}

	l = strlen(s1);
	s = n + l;

	p = malloc(sizeof(char) * s);

	if (!p)
	{
		return (NULL);
	}

	for (i = 0; i < l; i++)
	{
		*(p + i) = *(s1 + i);
	}

	for (j = i; j < s; j++)
	{

		p[j] = s2[b];
		b++;
	}
	return (p);
}
