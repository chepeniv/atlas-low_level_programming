#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new head to a linked list
 * @head: a pointer to the old head
 * @str: new head node's data
 *
 * Return: pointer to the new head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead = malloc(sizeof(list_t));
	char *newStr = strdup(str);
	int strLen = sizeof(*str)/sizeof(char);

	newHead->str = newStr;
	newHead->len = strLen;

	if (head == NULL)
		newHead->next = NULL;
	else
		newHead->next = *head;

	return (newHead);
}
