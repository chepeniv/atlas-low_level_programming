#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - destroys a linked list
 * @head: a pointer to the head node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *temp;

	if (*head == NULL)
		return;

	current = *head;
	*head = NULL;
	while (current->next != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	free(current);
}
