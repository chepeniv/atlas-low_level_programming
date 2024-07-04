#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node to the tailend of a linked list
 * @head: a pointer to the head node
 * @str: new tail node's data
 *
 * Return: pointer to the new head node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;
	list_t *current;
	char *datastr;
	int len;

	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);
	datastr = strdup(str);
	if (datastr == NULL)
	{
		free(tail);
		return (NULL);
	}

	len = _strlen(str);
	tail->str = datastr;
	tail->len = len;
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
