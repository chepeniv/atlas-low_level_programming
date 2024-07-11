#include "lists.h"

/**
 * print_dlistint - printout the data of each element in doubly linked list
 * @h: a pointer to the current items in the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	printf("&d\n", h->n);
	return (print_dlistint(h->next) + 1);
}
