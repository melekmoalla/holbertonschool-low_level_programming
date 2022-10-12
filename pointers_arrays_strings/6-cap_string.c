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

	for (i = 1; i < x; i++)
	{
		if ((s[i]) && s[i - 1] == ' ')
		{

			s[i] = toupper(s[i]);
		}
		if ((s[0]))
		{
			s[0] = toupper(s[0]);
		}
	}
	return (s);
}
