#include <stdlib.h>
#include "main.h"

/**
 * _strdup - create a duplicate of a given string upon the heap
 * @original: string to duplicate.
 *
 * Return: pointer to the constructed array upon success, otherwise NULL
 */
char *_strdup(char *original)
{
	char *duplicate;
	int size;
	int i;

	size = 0;
	while (original[size] != '\0')
		size++;

	duplicate = malloc(size);
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		duplicate[i] = original[i];
	duplicate[size] = '\0';
	
	return (duplicate);
}
