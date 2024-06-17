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
	//
	unsigned int items = sizeof(argv[1]);
	unsigned int size = sizeof(argv[2]);

	int *an_array = _calloc(items, size);
	free(an_array);
	*/

	int i;
	int *range;
	int min;
	int max;

	min = 1;
	max = 10;
	range = array_range(min, max);
	for (i = 0; i < max; i++)
		printf("%d, ", range[i]);
	printf("\n");
	free(range);

	min = -5;
	max = 5;
	range = array_range(min, max);
	for (i = 0; i < max; i++)
		printf("%d, ", range[i]);
	printf("\n");
	free(range);

	min = -15;
	max = -5;
	range = array_range(min, max);
	for (i = 0; i < max; i++)
		printf("%d, ", range[i]);
	printf("\n");
	free(range);

	return 0;
}
