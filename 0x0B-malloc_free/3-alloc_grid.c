#include "main.h"
#include <stddef.h>
/**
 * alloc_grid - funtion that returns a pointer to a 2D array
 * @width: first argument
 * @height: second argument
 * Return: A pointer or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	if (width  == 0 || height == 0)
		return (NULL);
	int *ar;
	ar = malloc(width * height * sizeof(int));
	if (ar = NULL)
		return (NULL);
	int i, j;
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}

