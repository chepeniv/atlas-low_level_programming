#include "lists.h"

/**
 * sum_dlistint - sums the data of all the nodes in a given list
 * @head: pointer to head of the list
 *
 * Return: the resultant int; otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
