#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *original);

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

/**
 * _strdup - create a duplicate of a given string upon the heap
 * @original: string to duplicate.
 *
 * Return: pointer to the constructed array upon success, otherwise NULL
 */
char *_strdup(char *original)
{
	char *duplicate;
	size_t size;
	size_t i;

	if (original == NULL)
		return (NULL);

	size = 0;
	while (original[size] != '\0')
		size++;
	size++;

	duplicate = malloc(size * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		duplicate[i] = original[i];
	/*duplicate[size] = '\0';*/

	return (duplicate);
}
