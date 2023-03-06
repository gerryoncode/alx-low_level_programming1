#include "main.h"
/**
 * _memset -fills first n bytes of memory with constant byte b
 * @s - First pointer
 * @n - number of bytes
 * @b - constant byte
 * Return: Returns filled 
 */
int *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
}
