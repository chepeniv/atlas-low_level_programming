#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - takes a dog struct and prints-out its contents
 * @d: the dog struct to reference
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->owner = owner;
	d->age = age;

	return d;
}
