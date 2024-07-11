#include "lists.h"

/**
 * get_dnodeint_at_index - finds the address of a node at a given index within
 * a doubly linked list
 * @head: pointer to head of the list
 * @index: node to find
 *
 * Return: address of node if found, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL && i < index)
	{
		current = current->next;
		++i;
	}

	return (current);
}
