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
	int i, j, z = 0;

	int b = strlen(needle) - 1;
	if (needle == NULL)
	{
		return (haystack);
	}
	else
	{

		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == needle[0])
			{
				j = 0;
				z = i;

				while (haystack[i] == needle[j])
				{

					if (j == b)
					{
						return (haystack + z);
						break;
					}
					j++;
					i++;
				}
			}
		}
	}

	return (0);
}
