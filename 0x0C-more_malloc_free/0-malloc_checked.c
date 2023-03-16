#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: sixe in bytes of allocated memory
 * Return: a pointer or status code 98
 */
void *malloc_checked(unsigned int b)
{
	int ar;

	ar = malloc(b);
	if (ar == NULL)
		return (98);
	return (ar);
}
