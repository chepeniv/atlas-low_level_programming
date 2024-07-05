#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node to the tailend of a linked list
 * @head: a pointer to the head node
 * @n: new tail node's data
 *
 * Return: pointer to the new tail node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail, *current;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);
	tail->n = n;
	tail->next = NULL;

	if (*head != NULL)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = tail;
	}
	else
		*head = tail;

	return (tail);
}
