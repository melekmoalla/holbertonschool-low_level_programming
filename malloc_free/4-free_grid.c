#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -2 dimensional grid  created by your alloc_grid function.
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}
