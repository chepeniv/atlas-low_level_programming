#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of a list node's data
 * @current: a pointer to current node
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *current)
{
	int sum;

	if (current == NULL)
		return (0);

	sum = current->n;

	if (current->next == NULL)
		return (sum);

	return (sum += sum_listint(current->next));
}
