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
	print_dog(&adog);

	return 0;
}
