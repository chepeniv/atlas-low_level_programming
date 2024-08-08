#include "search_algos.h"

void print_progress(int *array, int pos, int len);
int binary_search_eng(int *array, int pos, int len, int value);

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
	int pos, len;

	if (array == NULL)
		return (-1);

	len = size - 1;
	pos = len / 2;
	/*print_progress(array, 0, len);*/

	printf("RANGE %d - %d\n", 0, len);
	if (value == array[pos])
		return (pos);
	else if (value > array[pos])
	{
		printf("GREATER THAN %d\n", array[pos]);
		printf("----------------\n");
		return binary_search_eng(array, pos, len, value);
	}
	else
	{
		printf("LESS THAN %d\n", array[pos]);
		printf("----------------\n");
		return binary_search_eng(array, 0, len, value);
	}
}

int binary_search_eng(int *array, int pos, int len, int value)
{
	if (len == 0 && pos != 0)
		return (-1);

	printf("RANGE %d - %d\n", pos, pos + len);
	len = len / 2;
	/*print_progress(array, pos, len);*/

	if (value == array[pos + len])
		return (pos + len);
	else if (value > array[pos + len])
	{
		printf("GREATER THAN %d\n", array[pos + len]);
		return binary_search_eng(array, pos + len + 1, len, value);
	}
	else
	{
		printf("LESS THAN %d\n", array[pos + len]);
		return binary_search_eng(array, pos, len - 1, value);
	}
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
