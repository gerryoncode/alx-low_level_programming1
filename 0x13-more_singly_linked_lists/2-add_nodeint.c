#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds a newa node at the beginning of listint_t
 * @head: the list unto which a node is added
 * @n: value of the data for the node to be added
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
