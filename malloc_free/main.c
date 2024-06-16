#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{

	char *strA = "first string";
	char *strB = "this is the second string";
	char *strC = "this is a very very very very very very long third string";
	char *strD = "this is the fourth string";

	char *dupA = _strdup(strA);
	printf("%s\n", dupA);
	free(dupA);
	dupA = NULL;

	char *dupB = _strdup(strB);
	printf("%s\n", dupB);
	free(dupB);
	dupB = NULL;

	char *dupC = _strdup(strC);
	printf("%s\n", dupC);
	free(dupC);
	dupC = NULL;

	char *dupD = _strdup(strD);
	printf("%s\n", dupD);
	free(dupD);
	dupD = NULL;

	return 0;
}
/*
	c_string = create_array(2, '+');
	printf("%s\n", c_string);
	free(c_string);
*/
