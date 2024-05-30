#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @num_array: the int array to operate on
 * @length: the number of elements in num_array
 *
 * Return: void
 */
void reverse_array(int *num_array, int length)
{
	int hold;
	int pos = 0;
	int halfway = length / 2;

	length--;
	while (pos < halfway)
	{
		hold = num_array[pos];
		num_array[pos] = num_array[length - pos];
		num_array[length - pos] = hold;
		pos++;
	}
}
