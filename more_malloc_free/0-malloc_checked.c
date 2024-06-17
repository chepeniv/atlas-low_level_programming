#include "main.h"
#include <stdlib.h>

/*
 * malloc_checked - attempt to safely allocate memory
 * @b: number of bytes to allocate
 *
 * Return: success: void pointer to a location on the heap
 */
void *malloc_checked(unsigned int b)
{
	void *attemp = malloc(b);

	if (attemp == NULL)
		exit(98);

	return (attemp);
}
