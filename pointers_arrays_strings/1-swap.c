#include "main.h"

/**
 * swap_int - swaps the values of given variables
 * @a: first value to swap
 * @b: second value to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
