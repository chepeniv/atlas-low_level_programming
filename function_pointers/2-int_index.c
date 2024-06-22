#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int in an array based on a what a given
 * callback determines
 * @array: array to search through
 * @size: size of array
 * @cmp: function deciding what to search for
 *
 * Return: success : position of found element ; fail : -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
