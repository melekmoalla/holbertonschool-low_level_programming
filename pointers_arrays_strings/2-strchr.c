#include "main.h"

/**
 * *_strchr - switch the paragraph to the number
 * @s: char
 * @c: char
 * Return: s
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
