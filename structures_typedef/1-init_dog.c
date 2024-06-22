#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * struct dog - a composite type holding a dog's info
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * init_dog - takes a dog struct and initializes it with the
 * given parameters
 * @d: the dog struct to modify
 * @name: dogs names
 * @age: dogs age
 * @owner: dogs owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
