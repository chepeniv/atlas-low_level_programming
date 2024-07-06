#include "main.h"
#include <stdio.h>
#include <limits.h>

typedef unsigned long int ulint;

ulint power_of_two(ulint power);

/**
 * print_binary - output the binary representation of a given int
 * @n: number to translate
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int sum = 0;
	long int power = 0;

	if (n == 1 || n == 0)
	{
		_putchar(n + '0');
		return;
	}
	else if (n == ULONG_MAX)
	{
		power = 63;
		sum = power_of_two(power);
	}
	else
	{
		while (sum < n)
		{
			power++;
			sum = power_of_two(power);
		}
		if (sum > n)
		{
			power--;
			sum = power_of_two(power);
		}
	}

	_putchar('1');
	power--;
	while (power > -1)
	{
		sum +=  power_of_two(power);
		if (sum > n)
		{
			_putchar('0');
			sum -= power_of_two(power);
		}
		else
			_putchar('1');
		power--;
	}
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
