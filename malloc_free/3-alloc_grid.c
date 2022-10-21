#include "main.h"

/**
 * **alloc_grid - check the code.
 *@width: int
 *@height: int
 * Return: Always 0 or t
 */

int **alloc_grid(int width, int height)
{

	int **array_pointer;
	int i;
	int j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	array_pointer = malloc(sizeof(int *) * height);

	if (array_pointer == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{

		array_pointer[i] = malloc(sizeof(int) * width);
		if (array_pointer[i] == 0)
		{
			for (--i; i >= 0; i--)
			{
				free(array_pointer[i]);
			}
			free(array_pointer);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{

			array_pointer[i][j] = 0;
		}
	}
	return (array_pointer);
}
