#include "main.h"

ulint power_of_two(ulint power);

/**
 * set_bit - set value of bit to one at given index
 * @index: position to access
 * @n: data to modify
 *
 * Return: value of bit, or -1 upon failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	ulint copy, pot;

	if (index > 64)
		return (-1);

	copy = *n;
	pot = power_of_two(index);
	*n = copy & ~pot;

	return (1);
}

ulint power_of_two(ulint power)
{
	ulint result = 1;

	while (power)
	{
		result *= 2;
		--power;
	}

	return (result);
}
