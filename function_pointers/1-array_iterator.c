#include "function_pointers.h"

/**
 * print_name - print the point function
 * @array: char
 * @size: pointer
 * @action:  a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array != NULL && action != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}