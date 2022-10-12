#include "main.h"

/**
 * *leet - check the code for
 *@s: char
 * Return: s
 */

char *leet(char *s)
{
	int i;
	int c;
	int b;
	char a[5] = "aeotl";
	char x[5] = "43071";
	char h[5] = "AEOTL";
	
	c = strlen(s);

	for (i = 0; i < c; i++)
	{
		for (b = 0; b < 5; b++)
		{
			if (s[i] == a[b] || s[i] == h[b])
			{

				s[i] = x[b];
			}
		}
	}
	return (s);
}
