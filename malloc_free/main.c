#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	char *C = "stringC-";
	//char *D = "-stringD";

	char *dupC = _strdup(C);
	printf("%s\n", dupC);
	free(dupC);
	dupC = NULL;

	return 0;
}

/*

	char *CD = str_concat(C, D);
	printf("%s\n", CD);
	free(CD);
	CD = NULL;

	char *dupA = _strdup(strA);
	printf("%s\n", dupA);
	free(dupA);
	dupA = NULL;

	c_string = create_array(2, '+');
	printf("%s\n", c_string);
	free(c_string);
*/
