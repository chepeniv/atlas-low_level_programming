#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	char *A = "first part-";
	char *B = "-second half";
	char *C = "stringC-";
	char *D = "-stringD";

	char *AB = str_concat(A, B);
	printf("%s\n", AB);
	free(AB);
	AB = NULL;

	char *CD = str_concat(C, D);
	printf("%s\n", CD);
	free(CD);
	CD = NULL;

	return 0;
}

/*
	char *dupA = _strdup(strA);
	printf("%s\n", dupA);
	free(dupA);
	dupA = NULL;

	c_string = create_array(2, '+');
	printf("%s\n", c_string);
	free(c_string);
*/
