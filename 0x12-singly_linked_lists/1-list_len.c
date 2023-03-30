#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a link
 * @h:  pointer to the list_t list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
