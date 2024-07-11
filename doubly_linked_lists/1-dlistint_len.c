#include "lists.h"

/**
 * dlistint_len - measures the length of a doubly linked list
 * @h: a pointer to the current items in the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	return (dlistint_len(h->next) + 1);
}
