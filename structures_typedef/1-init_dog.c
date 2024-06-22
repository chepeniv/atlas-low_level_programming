#include "main.h"
#include "dog.h"
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
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	dog->name = name;
	dog->owner = owner;
	dog->age = age;
}
