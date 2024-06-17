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
	int *marray;

	if (items == 0 || size == 0)
		return (NULL);

	marray = malloc(items * size);
	if (marray == NULL)
		return (NULL);

	for (i = 0; i < items; i++)
		marray[i] = 0;

	return (marray);
}
