#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - measures the total characters in a string
 * @str: string to measure
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		++len;
	return (len);
}

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
	int len = _strlen(newStr);

	if (newHead == NULL)
		return (NULL);

	newHead->str = newStr;
	newHead->len = len;
	if (head == NULL)
		newHead->next = NULL;
	else
		newHead->next = *head;

	*head = newHead;

	return (newHead);
}
