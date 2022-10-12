#include "main.h"
#include <stdio.h>

/**
 * cap_string - switch separators of word to \0
 *@s: string
 * Return: s
 */

char *cap_string(char *s)
{
	int i;
	int x = strlen(s);

	for (i = 0; i <= x; i++)
	{
		if (s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
