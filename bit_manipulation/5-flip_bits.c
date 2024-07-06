#include "main.h"
#include <stdio.h>
#include <limits.h>

ulint power_of_two(ulint power);
long int get_bit64(unsigned long int n, unsigned long int index);

/**
 * flip_bits - determines the number of bits that need to be flipped
 * in order change one data sequence into another
 * @a: first data sequence
 * @b: second data sequence
 *
 * Return: minimum number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	unsigned long int result;
	unsigned long int flips = 0;
	unsigned long int index = 64;

	result = a ^ b;

	while (index)
		flips += get_bit64(result, index--);

	flips += get_bit64(result, 0);

	return (flips);
}


/**
 * get_bit64 - returns the value of a bit at a given position
 * @n: data sequence
 * @index: position in n to examine
 *
 * Return: value at 'index' position in n
 */
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
