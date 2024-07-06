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
void print_binary(unsigned long int n)
{
	unsigned long int sum = 0, power = 0;
	const unsigned long int limit = 64;
	const unsigned long int one = 1;

	if (n == 1 || n == 0)
	{
		_putchar(n + '0');
		return;
	}

	if (n == ULONG_MAX)
	{
		power = limit - one;
		sum = one << (power);
	}
	else
	{
		while (sum < n)
		{
			power++;
			sum = one << power;
		}
		if (sum > n)
		{
			power--;
			sum = one << power;
		}
	}

	_putchar('1');
	power--;
	while (power + one > 0)
	{
		sum += one << power;
		if (sum > n)
		{
			_putchar('0');
			sum -=  one << power;
		}
		else
			_putchar('1');
		power--;
	}
}
