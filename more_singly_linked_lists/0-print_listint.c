#include "lists.h"
#include <stdio.h>

/**
 * print_listint - printout data fields for each element in linked list
 * @h: a pointer to the first item in a linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *current = h;
	int total = 0;

	if (h == NULL)
		return (total);

	while (current->next != NULL)
	{
		printf("%d\n", current->n);
		total++;
		current = current->next;
	}
	printf("%d\n", current->n);
	total++;

	return (total);
}
