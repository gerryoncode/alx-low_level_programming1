#include "main.h"
/**
 * _memset -fills first n bytes of memory with constant byte
 * @s: First pointer
 * @b: constant byte
 * @n: bytes of memory address
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
