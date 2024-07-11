#include "lists.h"

/**
 * add_dnodeint_end - adds a new tail node to a given doubly linked list
 * @head: a double pointer to the head of the list
 *
 * Return: address of newly appended node, or NUll upon failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newtail = NULL;
	dlistint_t *current = NULL;

	newtail = malloc(sizeof(dlistint_t));
	if (newtail == NULL)
		return (NULL);
	newtail->n = n;
	newtail->next = NULL;

	if (head != NULL || *head != NULL)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = newtail;
		newtail->prev = current;
	}
	else
	{
		*head = newtail;
		newtail->prev = NULL;
	}

	return (newtail);
}
