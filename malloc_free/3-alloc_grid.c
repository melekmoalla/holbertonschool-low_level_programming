#include "main.h"

/**
 * *str_concat - check the code.
 *@width: int
 *@height: int
 * Return: Always 0 or t
 */

int **alloc_grid(int width, int height)
{
	int **array = NULL;

	if (height != 0 && width != 0)
	{
		array = malloc(height * sizeof(int *));

		if (array != NULL)
		{
			int i = 0;

			while (i < height && (array[i] = calloc(width, sizeof(int))) != NULL)
			{
				++i;
			}

			if (i != height)
			{
				while (i != 0)
				{
					free(array[--i]);
				}
				free(array);
				array = NULL;
			}
		}
	}

	return (array);
}
