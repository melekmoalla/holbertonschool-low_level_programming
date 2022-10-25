#include "main.h"

/**
 * *string_nconcat - writes the character c to stdout
 *@s1: char
 *@s2: char
 * @n: int
 * Return: p
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, s, l;

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

	while (*s1 != '\0')
	{
		*(p + j) = *s1;
		s1++;
		j++;
	}

	while ((*s2 != '\0') && (i < n))
	{
		*(p + j) = *s2;
		s2++;
		j++;
		i++;
	}
	*(p + j) = '\0';

	return (p);
}
