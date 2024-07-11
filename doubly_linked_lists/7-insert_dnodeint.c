#include "lists.h"

/**
 * get_dnodeint_at_index - finds the address of a node at a given index within
 * a doubly linked list
 * @head: pointer to head of the list
 * @index: node to find
 * @n: node to find
 *
 * Return: address of node if found, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int index, int n)
{
	unsigned int i = 0;
	int m = (int) n;
	dlistint_t *before = NULL, *new = NULL, *after = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = m;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}

	after = *head;
	while (after != NULL && i < index)
	{
		before = after;
		after = after->next;
		++i;
	}

	if (i != index - 1)
		return (NULL);

	before->next = new;
	new->prev = before;
	new->next = after;
	after->prev = new;

	return (new);
}
