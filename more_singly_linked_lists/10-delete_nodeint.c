#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete the node at index in list
 * @head: double pointer to first item in list
 * @index: position in list
 *
 * Return: 1 upon success, -1 upon failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before, *current, *after;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	if (index > listint_len(*head))
		return (-1);

	while (current != NULL && i < index)
	{
		before = current;
		current = current->next;
		after = current->next;
		++i;
	}

	before->next = after;
	free(current);
	return (1);
}


/**
 * listint_len - measures the length of a linked list
 * @h: a pointer to the first node
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int total = 0;
	const listint_t *current = h;

	if (current == NULL)
		return (total);
	if (current->next == NULL)
		return (++total);
	while (current->next != NULL)
	{
		total++;
		current = current->next;
	}

	return (++total);
}
