#include "lists.h"

/**
 * free_dlistint - destroys a given doubly linked list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	dlistint_t *previous = NULL;

	if (head == NULL)
		return;

	current = head;
	while (current->next != NULL)
	{
		previous = current;
		current = current->next;
		free(previous);
	}
	free(current);
}
