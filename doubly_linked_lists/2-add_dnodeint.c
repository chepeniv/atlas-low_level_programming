#include "lists.h"

/**
 * add_dnodeint - adds a new head node to a given doubly linked list
 * @head: a double pointer to the current head of the list
 *
 * Return: address of new head node, or NULL upon failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newHead;
	dlistint_t *oldHead = *head;

	newHead = malloc(sizeof(dlistint_t));
	if (newHead == NULL)
		return (NULL);

	newHead->n = n;
	newHead->prev = NULL;
	if (head == NULL)
		newHead->next = NULL;
	else
	{
		oldHead->prev = newHead;
		newHead->next = oldHead;
	}

	*head = newHead;
	return (newHead);
}
