#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds a new head to a linked list
 * @head: a pointer to the new head
 * @str: new node's data
 *
 * Return: pointer to the new head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	list_t *temp = NULL;

	if (head == NULL)
	{
		newNode = &list_t
		{
			strdup(str),
			sizeof(*str)/sizeof(char),
			NULL
		};
		return (newNode);
	}

	temp = *head;

	newNode = &list_t
	{
		strdup(str),
		sizeof(*str)/sizeof(char),
		temp;
	};

	return (newNode);
}
