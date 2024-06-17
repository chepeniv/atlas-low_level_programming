#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of consecutive integers
 * @min: lower bound
 * @max: upper bound
 *
 * Return: success: int pointer to the created array; failure: NULL
 */
int *array_range(int min, int max)
{
	int i, length;
	int *range;

	if (min > max)
		return (NULL);

	length = max - min;
	range = malloc(length * sizeof(*range));
	if (range == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		range[i] = min + i;

	return (range);
}
