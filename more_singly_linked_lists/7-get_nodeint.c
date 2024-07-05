#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - find and return the nth node
 * @head: a pointer to the first node
 * @index: position of the nth node
 *
 * Return: the nth node if found otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (current != NULL && i < index)
	{
		current = current->next;
		++i;
	}

	return (current);
}
