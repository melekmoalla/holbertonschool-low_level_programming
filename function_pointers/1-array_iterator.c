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
	if (name != NULL && f != NULL && size != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}