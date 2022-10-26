#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strstr - function that locates a substring.
 * @haystack: char
 * @needle: char
 * Return: haystack + i or 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	int b = strlen(needle) - 1;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;

			while (haystack[i] == needle[j])
			{

				if (j == b)
				{
					return (needle);
					break;
				}
				j++;
				i++;
			}
		}
	}
	return (0);
}
