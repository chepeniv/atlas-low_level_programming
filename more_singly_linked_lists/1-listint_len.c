#include "lists.h"
#include <stdio.h>

/**
 * listint_len - measures the length of a linked list
 * @h: a pointer to the first node
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int total = 0;
	const listint_t *current = h;

	if (current == NULL)
		return (total);
	if (current->next == NULL)
		return (++total);
	while (current->next != NULL)
	{
		total++;
		current = current->next;
	}

	return (++total);
}
