#include "main.h"

/**
 * *_strdup - check the code.
 *@str: int
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *t = NULL;
	int l = 0;
	int i = 0;

	if (!str)
	{
		return (NULL);
	}

	l = strlen(str);

	t = malloc(sizeof(char) * l + 1);

	if (!t)
	{

		return (NULL);
	}
	while (i <= l)
	{
		*(t + i) = *(str + i);
		i++;
	}
	return (t);
}
