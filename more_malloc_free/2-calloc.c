#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate initialized memory based on item count and size
 * @items: number of items
 * @size: number of bytes of each item
 *
 * Return: success: void pointer to a location on the heap; failure: NULL
 */
void *_calloc(unsigned int items, unsigned int size)
{
	unsigned int i;
	unsigned char *marray;
	unsigned int length;

	if (items == 0 || size == 0)
		return (NULL);

	length = items * size;
	marray = malloc(length);
	if (marray == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		marray[i] = '\0';

	return (marray);
}
