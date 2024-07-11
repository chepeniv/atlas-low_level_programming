#include "lists.h"

/**
 * delete_dnodeint_at_index - attemps to delete the node at given position
 * @head: pointer to head of the list
 * @pos: index at which to delete the node
 *
 * Return: success, 1; failure, -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int pos)
{
	unsigned int i = 0;
	dlistint_t *before = NULL, *current = NULL, *after = NULL;

	if (*head == NULL)
		return (-1);

	current = *head;
	while (current != NULL && i < pos)
	{
		before = current;
		current = current->next;
		if (current->next != NULL)
			after = current->next;
		++i;
	}

	if (i != pos || current == NULL)
		return (-1);

	if (before != NULL)
		before->next = after;
	else
	{
		after = current->next;
		*head = after;
	}
	if (after != NULL)
		after->prev = before;

	free(current);

	return (1);
}
