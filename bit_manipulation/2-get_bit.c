#include "main.h"
#include <stdio.h>
#include <limits.h>

ulint power_of_two(ulint power);

/**
 * get_bit - return value of bit at position
 * @index: position to access
 *
 * Return: value of bit, or -1 upon failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;
	ulint pot;

	if (index > 64)
		return (-1);

	pot = power_of_two(index);
	result = n & pot;

	if (result)
		result = 1;

	return (result);
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
