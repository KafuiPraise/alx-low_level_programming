#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - will frees 2d array
 * @grid: 2d grid
 * @height: height of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
