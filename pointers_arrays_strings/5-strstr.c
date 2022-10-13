#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function that locates a substring.
 * @haystack: char
 * @needle: char
 * Return: haystack + i or 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[i] == needle[0]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (!needle[j])
		{
			return (haystack + i);
		}
		else
		{
			j = 0;
		}
	}
	return (0);
}
