#include "function_pointers.h"

/**
 * array_iterator - print the point function
 * @array: char
 * @size: pointer
 * @action:  a pointer to the function you need to use
 */

int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (size <= 0)
    {
        return (-1);
    }

    if (array != NULL && cmp != NULL)
    {
        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]))
                return (i);
        }
    }

    return (-1);
}