#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - destroys a linked list
 * @head: a pointer to the head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *temp;

	if (head == NULL)
		return;

	current = head;
	head = NULL;
	while (current->next != NULL)
	{
		temp = current;
		current = current->next;

		free(temp->str);
		free(temp);
	}
	free(current->str);
	free(current);

	return;
}
