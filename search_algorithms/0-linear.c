#include "search_algos.h"

/**
 * linear_search - iterates through an unsorted array of numbers until it finds
 * the index of the value given
 * @array: array to search through
 * @size: length of the array given
 * @value: value to search for
 *
 * Return: success - index of the value found; failure - (-1)
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0, isize = (int) size;

	if (array == NULL)
		return (-1);

	for (index = 0; index < isize; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			break;
	}

	if (index == isize)
		return (-1);
	return (index);
}
