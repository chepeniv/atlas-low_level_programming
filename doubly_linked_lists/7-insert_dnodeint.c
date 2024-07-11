#include "lists.h"

/**
 * get_dnodeint_at_index - finds the address of a node at a given index within
 * a doubly linked list
 * @head: pointer to head of the list
 * @pos: node to find
 * @n: node to find
 *
 * Return: address of node if found, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int pos, int n)
{
	unsigned int i = 0;
	dlistint_t *before = NULL, *new = NULL, *after = NULL;

	if (*head == NULL)
		return (NULL);

	after = *head;
	while (after != NULL && i < pos)
	{
		before = after;
		after = after->next;
		++i;
	}

	if (i != pos)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (before == NULL)
		*head = new;
	else
		before->next = new;

	new->prev = before;
	new->next = after;

	if (after != NULL)
		after->prev = new;

	return (new);
}
