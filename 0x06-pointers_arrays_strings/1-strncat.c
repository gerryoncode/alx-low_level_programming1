#include "mian.h"
/**
 * _strncat -  Concatenates two strings with the second strings n elements
 * @dest: First string pointer
 * @src: Second string pointer
 * @n: Integer parameter
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; j < n; j++)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
		} else
		{
			return (desc);
		}
	}
	desc[i] = '\0';
	return (dest);
}
