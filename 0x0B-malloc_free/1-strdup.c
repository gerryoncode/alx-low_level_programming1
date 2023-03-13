#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to anew string
 * @str: String to be copied to the new block
 * Return: a new pointer to a string
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *ar;

	while (str[i] != '\0')
	{
		i++;
	}
	ar = malloc((i * sizeof(char)) + 1);
	while (j < i)
	{
		ar[j] = str[j];
		j++;
	}
	ar[j] = '\0';
	return (ar);
}
