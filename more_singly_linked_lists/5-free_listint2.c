#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - destroys a linked list and sets head to NULL
 * @head: a double pointer to the head node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (head == NULL || *head == NULL)
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
