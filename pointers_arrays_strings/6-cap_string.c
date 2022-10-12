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
	int x = strlen(s) - 1;

	for (i = 1; i < x; i++)
	{

		if (isalpha(s[i]) && (s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'))
		{
			s[i] = toupper(s[i]);
		}
		if (isalpha(s[0]))
		{
			s[0] = toupper(s[0]);
		}
	}
	return (s);
}
