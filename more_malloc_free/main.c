#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char **argv)
{
	/*
	char *strA = "prefix string followed by :";
	char *strB = "a fraction of the suffix string";

	char *strAnB = string_nconcat(strA, strB, 8);
	printf("%s\n", strAnB);
	free(strAnB);
	*/
	unsigned int items = sizeof(argv[1]);
	unsigned int size = sizeof(argv[2]);

	int *an_array = _calloc(items, size);
	free(an_array);

	return 0;
}
