#include "main.h"
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	dog adog;
	char *name ="thomas";
	char *owner ="eric";
	float age = 2.4;

	init_dog(&adog, name, age, owner);

	printf("name: %s\n", adog.name);
	printf("age: %f\n", adog.age);
	printf("owner: %s\n", adog.owner);

	return 0;
}
