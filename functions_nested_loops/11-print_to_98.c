#include "main.h"
#include <stdio.h>

int _exp(int, int);
void print_fwrd(int);

/**
 * print_to_98 - count from any given number towards 98
 * @n: the number to count from
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			print_fwrd(i);
			_putchar(44);
			_putchar(32);
		}
	}
	else if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			print_fwrd(i);
			_putchar(44);
			_putchar(32);
		}
	}
	print_fwrd(98);
	_putchar(10);
}

void print_fwrd(int m)
{
	while (m > 1) 
	{
		int f = m;
		int e = 0;

		while (f >= 10)
		{
			f /= 10;
			e += 1;
		}

		_putchar(f + '0');

		m = m - (f * _exp(10, e));
	}
}

int _exp(int base, int exp)
{
	int pwr = base;

	while (exp > 1)
	{
		pwr = pwr * base;
		--exp;
	}
	return (pwr);
}

/*void print_rev(int m)
 *{
 *	while (m != 0) 
 *	{
 *		int l = m % 10;
 *		_putchar(l + '0');
 *		m = (m - l) / 10;
 *	}
 *}
 */
