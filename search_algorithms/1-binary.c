#include "search_algos.h"

/**
 * binary_search - searches through a sorted array of numbers until it finds
 * the index of the value given
 * @array: array to search through
 * @size: length of the array given
 * @value: value to search for
 *
 * Return: success - index of the value found; failure - (-1)
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return binary_search_eng(array, 0, size - 1, value);
}

/**
 * binary_search_eng - the algorithm that powers the binary_search() function
 * @array: the subarray to search through
 * @pos: the position from which to start search
 * @len: length of the subarray to analyse through
 * @value: the target value
 *
 * Return: void
 */
int binary_search_eng(int *array, int pos, int len, int value)
{
	int half, mid, up_len, up_pos, low_len, low_pos;

	if (len < 0)
		return (-1);

	print_progress(array, pos, len);

	half = len / 2;
	mid = pos + half;
	low_pos = pos;
	up_pos = low_pos + half + 1;
	low_len = half - 1;
	if (len % 2 == 0)
		up_len = low_len;
	else
		up_len = low_len + 1;

	if (value == array[mid])
		return (mid);
	else if (value > array[mid])
		return binary_search_eng(array, up_pos, up_len, value);
	else
		return binary_search_eng(array, low_pos, low_len, value);
}

/**
 * print_progress - outputs the progress of the current search
 * @array: array to printout
 * @size: length of the array given
 *
 * Return: void
 */
void print_progress(int *array, int pos, int len)
{
	int index;

	printf("Searching in array:");
	for (index = 0; index < len; index++)
		printf(" %d,", array[pos + index]);
	printf(" %d\n", array[pos + index]);
}
