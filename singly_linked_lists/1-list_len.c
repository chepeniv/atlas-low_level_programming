#include "lists.h"
#include <stdio.h>

/**
 * list_len - measures the length of a linked list
 * @h: a pointer to the first item
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->next == NULL)
		return (1);
	else
		return (print_list(h->next) + 1);
}
