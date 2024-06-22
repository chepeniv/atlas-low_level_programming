#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - takes a dog struct and prints-out its contents
 * @name: the dog struct to reference
 * @age: the dog struct to reference
 * @owner: the dog struct to reference
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	char *dup_name = _strdup(name);
	char *dup_owner = _strdup(owner);

	if (d == NULL)
		return (NULL);
	if (dup_name == NULL)
		return (NULL);
	if (dup_name == NULL)
		return (NULL);

	d->name = dup_name;
	d->owner = dup_owner;
	d->age = age;

	return d;
}
