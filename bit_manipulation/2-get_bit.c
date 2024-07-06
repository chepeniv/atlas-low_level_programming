#include "main.h"
#include <stdio.h>
#include <limits.h>

ulint power_of_two(ulint power);

/**
 * print_binary - output the binary representation of a given int
 * @n: number to translate
 *
 * Return: void
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
