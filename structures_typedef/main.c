#include "main.h"
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	typedef struct dog dog;
	dog adog;
	dog *to_adog = &adog;
	char *name ="thomas";
	char *owner ="eric";
	float age = 2.4;

	init_dog(to_adog, name, age, owner);

	printf("name: %s\n", to_adog->name);
	printf("age: %f\n", to_adog->age);
	printf("owner: %s\n", to_adog->owner);

	return 0;
}
