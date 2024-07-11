#include "lists.h"

/**
 * insert_dnodeint_at_index - attemps to insert a new node
 * at given position
 * @head: pointer to head of the list
 * @pos: index it insert new node in
 * @n: data for the new node
 *
 * Return: pointer to the new node if successfully inserted;
 * NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(
		dlistint_t **head,
		unsigned int pos,
		int n)
{
	unsigned int i = 0;
	dlistint_t *before = NULL, *new = NULL, *after = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}

	after = *head;
	while (after != NULL && i < pos)
	{
		before = after;
		after = after->next;
		++i;
	}

	if (i != pos)
		return (NULL);

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
