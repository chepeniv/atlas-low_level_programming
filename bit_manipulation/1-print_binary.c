#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_binary - output the binary representation of a given int
 * @n: number to translate
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int sum = 0;
	int power = 0;

	if (n == 1 || n == 0)
	{
		_putchar(n + '0');
		return;
	}
	else if (n == ULONG_MAX)
		sum = n;

	while (sum < n)
	{
		power++;
		sum = 1 << power;
	}

	if (sum > n)
	{
		power--;
		sum = 1 << power;
	}

	_putchar('1');
	power--;
	while (power >= 0)
	{
		sum += 1 << power;
		if (sum > n)
		{
			_putchar('0');
			sum -= 1 << power;
		}
		else
			_putchar('1');
		power--;
	}
}
