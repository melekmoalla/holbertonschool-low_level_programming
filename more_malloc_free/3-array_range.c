#include "main.h"

/**
 * *array_range -  function that creates an array of integers.
 *@min:  int
 *@max:  int
 * Return: p
 */

int *array_range(int min, int max)
{
	int *p;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == 0)
	{
		return (NULL);
	}
	while (i <= max)
	{
		p[i] = i;
		i++;
	}
	return (p);
}
