#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a composite type holding a dog's info
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
