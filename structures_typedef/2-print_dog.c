#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
