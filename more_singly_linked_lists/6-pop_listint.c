#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete head node
 * @head: a double pointer to the head node
 *
 * Return: head node's int value
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodedata;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	nodedata = temp->n;
	*head = temp->next;
	free(temp);

	return (nodedata);
}
