#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *original);

/**
 * new_dog - create and return a dog struct
 * @name: name for the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: success - dog_t ; failure - NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	char *dup_name = _strdup(name);
	char *dup_owner = _strdup(owner);

	if (d == NULL || dup_name == NULL || dup_owner == NULL)
	{
		free(d);
		free(dup_name);
		free(dup_owner);
		return (NULL);
	}

	d->name = dup_name;
	d->owner = dup_owner;
	d->age = age;

	return (d);
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

	return (duplicate);
}
