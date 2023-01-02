#include "search_algos.h"

/**
 * linear_search - function that prints a string in reverse.
 *@array: int : table
 *@size: size of yhe table
 *@value: int the value that we want to checked
 *Return: i
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i, a = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i <= size; i++)
	{
		if (array[i] != value && a == size)
		{
			return (-1);
		}
		else if (array[i] != value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			a++;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			break;
		}
	}
	return (i);
}
