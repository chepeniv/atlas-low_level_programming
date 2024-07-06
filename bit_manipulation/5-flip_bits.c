#include "main.h"
#include <stdio.h>
#include <limits.h>

ulint power_of_two(ulint power);
long int get_bit64(unsigned long int n, unsigned long int index);

/**
 * get_bit - return value of bit at position
 * @index: position to access
 * @n: data to examine
 *
 * Return: value of bit, or -1 upon failure
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	unsigned long int result;
	unsigned long int flips = 0;
	unsigned long int index = 64;

	result = a ^ b;
	printf("xor result: %lu\n", result);

	while (index)
		flips += get_bit64(result, index--);

	flips += get_bit64(result, 0);

	return (flips);
}

long int get_bit64(unsigned long int n, unsigned long int index)
{
	long int result;
	ulint pot;

	if (index > 64)
		return (0);

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
