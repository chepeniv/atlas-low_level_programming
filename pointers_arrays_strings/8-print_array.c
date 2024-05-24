#include "main.h"
#include <stdio.h>

/**
 * print_array - printout the first n elements of a given array
 * @array: pointer to the array to process
 * @amount: the prefix amount of elements to print from the array 
 *
 * Return: void
 */
void print_array(int *array, int amount)
{
	int iteration = 0;
	int *position = array;

	while (iteration <= amount)
	{
		printf("%d, ", *position);
		position++;
		iteration++;
	}

	printf("\n");
}
