#include "main.h"

/**
 * _strcat - concatenate two given strings
 * @head: the leading string
 * @tail: the trailing string
 *
 * Return: a pointer to the modified head string
 */
char *_strcat(char *head, char *tail);
{
	char *stitch = head;
	int i= 0;

	while (*stitch != '\0')
		stitch++;

	while (tail[i] != '\0')
	{
		*stitch = tail[i];
		stitch++;
		i++;
	}

	return (head);
}
