#include "lists.h"
#include <stdio.h>

/**
 * print_list - printout a data field for each element in linked list
 * @h: a pointer to the first item in a linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->str == NULL)
		printf("[%d] %s\n", h->len, "(nil)");
	else
		printf("[%d] %s\n", h->len, h->str);

	if (h->str == NULL)
		return (1);
	else
		return (print_list(h->next) + 1);
}
