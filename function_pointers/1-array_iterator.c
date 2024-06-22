#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - callsback a given function on each element of an array
 * @array: array to iterate over
 * @size: size of array
 * @action: function to callback
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	for (i = 0; i < size; i++)
		action(array[i]);
}

