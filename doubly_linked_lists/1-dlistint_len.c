#include "lists.h"
#include <stdio.h>

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
	if (h->next == NULL)
		return (1);
	return (print_list(h->next) + 1);
}
