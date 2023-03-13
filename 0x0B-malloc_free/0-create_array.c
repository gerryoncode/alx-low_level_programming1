#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initialized it with a specific char
 * @size: size of the array
 * @c: character to be initialized
 * Return: returns a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	int i = 0;

	ar = malloc((size * sizeof(char)));
	if (size < 1)
	{
		return (NULL);
	}
	while (i <= size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
