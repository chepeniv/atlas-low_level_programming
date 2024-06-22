#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - deallocate memory allocated for a given dog
 * @d: reference to dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL);
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
