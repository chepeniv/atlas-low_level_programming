#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node in list at index
 * @index: position in list
 * @value: data for new node
 *
 * Return: pointer to the new node or NULL upon failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int value)
{
	listint_t *before, *after, *new;
	unsigned int i = 0;

	if ((head == NULL ||
		*head == NULL) &&
		index != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = value;

	if (index == 0)
	{
		*head = new;
		return (*head);
	}

	before = *head;
	while (before != NULL && i < index - 1)
	{
		before = before->next;
		++i;
	}
	if (i != index - 1)
		return (NULL);

	after = before->next;
	before->next = new;
	new->next = after;
	new->n = value;

	return (new);
}

/*
  listint_t *get_nodeint_at_index(*head, index);
  size_t listint_len(*head);
  listint_t *add_nodeint(**pos, n);
*/
