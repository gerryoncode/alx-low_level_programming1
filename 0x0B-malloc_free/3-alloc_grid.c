#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - funtion that returns a pointer to a 2D array
 * @width: first argument
 * @height: second argument
 * Return: A pointer or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width  == 0 || height == 0)
		return (NULL);

	ar = malloc(width * height * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(ar[i]);
			free(ar);
			return (NULL);
			}
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}

