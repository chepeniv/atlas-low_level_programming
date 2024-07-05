#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds a new head to a linked list
 * @head: a pointer to the old head
 * @n: new head node's data
 *
 * Return: pointer to the new head node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *newHead;

	newHead = malloc(sizeof(listint_t));
	if (newHead == NULL)
		return (NULL);

	newHead->n = n;
	if (head == NULL)
		newHead->next = NULL;
	else
		newHead->next = *head;

	*head = newHead;
	return (newHead);
}
