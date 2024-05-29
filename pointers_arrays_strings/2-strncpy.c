#include "main.h"

/**
 * _strncat - concatenate 'select' bytes of one string onto another
 * @head: the leading string
 * @tail: the trailing string
 * @select: the number of bytes to take from 'tail'
 *
 * Return: a pointer to the modified head string
 */
char *_strncat(char *head, char *tail, int select)
{
	char *stitch = head;
	int i = 0;

	while (*stitch != '\0')
		stitch++;

	while (i < select)
	{
		*stitch = tail[i];
		stitch++;
		i++;
	}

	return (head);
}
char *_strncpy(char*, char*, int);
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return dest;
}


