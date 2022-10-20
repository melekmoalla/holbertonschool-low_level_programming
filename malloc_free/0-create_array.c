#include "main.h"

/**
 * *create_array - check the code.
 *@size: int
 *@c: char
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	if (t == NULL)
	{
		return (0);
	}
	else
	{
		t = malloc(sizeof(*t) * size);
		for (i = 0; i < size; i++)
		{
			t[i] = c;
		}
	}
	return (t);
}
