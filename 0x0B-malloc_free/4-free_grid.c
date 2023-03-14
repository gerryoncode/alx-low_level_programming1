#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a two dimensional grid
 * @grid: POinter to the 3D array
 * @height: height of the array
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
