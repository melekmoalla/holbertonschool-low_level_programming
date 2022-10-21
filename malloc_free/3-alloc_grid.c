#include "main.h"

/**
 * **alloc_grid - check the code.
 *@width: int
 *@height: int
 * Return: Always 0 or t
 */

int **alloc_grid(int width, int height)
{
	int **array;

	if (height != 0 && width != 0)
	{
		array = malloc(height * sizeof(int *));
		if (array == 0)
		{
			return (NULL);
		}

		if (array != NULL)
		{
			int i = 0;

			while (i < height && (array[i] = calloc(width, sizeof(int))) != NULL)
			{
				if (array == 0)
				{
					for (--i; i > 0; i--)
					{
						free(array[i]);
					}
					free(array);
				}
				++i;
			}

			if (i != height)
			{
				while (i != 0)
					free(array[--i]);
				free(array);
				array = NULL;
			}
		}
	}

	return (array);
}
