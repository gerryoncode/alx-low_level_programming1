#include "lists.h"
#include <stdio.h>
#include <stdlib.h> 
/**
 * print_listint - prints the element of a listint_t list
 * @h: first parameter of the function
 * Return: fturns the number of nodes.
 */
size_t print_listint(const listint *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
	}
	return (n);
}
