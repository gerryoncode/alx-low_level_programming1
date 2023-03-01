#include "main.h"
/**
 * _strncpy - copies strings
 * @dest: First  pointer
 * @src: Second pointer
 * @n: Integer parameter
 * Return: resultant pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; (i < n) && (*(src + i) != '\0'); i++)
		*(dest + i) = *(src + i);
	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
