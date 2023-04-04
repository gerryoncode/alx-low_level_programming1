#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds node to the end of the list
 * @head: The list unto which the node will be added
 * @n: the value of the node to be added
 * Return: Address of the new element or NULL for failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	return (new);
}
