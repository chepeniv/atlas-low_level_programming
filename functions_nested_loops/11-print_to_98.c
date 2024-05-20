#include "main.h"
#include <stdio.h>

int _exp(int, int);
void print_fwrd(int);
int rev_int(int);
int reduce_int(int n);

/**
 * print_to_98 - count from any given number towards 98
 * @n: the number to count from
 *
 * Return: void
 */
void print_to_98(int n)
{
	/*
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
	_putchar(10);
	*/

	printf("original : %d\n", 10);
	printf("reversed : %d\n", rev_int(10));
	printf("original : %d\n", 2301);
	printf("reversed : %d\n", rev_int(2301));
	printf("original : %d\n", 13);
	printf("reversed : %d\n", rev_int(13));
	printf("original : %d\n", 670374);
	printf("reversed : %d\n", rev_int(670374));
	printf("original : %d\n", 4704420);
	printf("reversed : %d\n", rev_int(4704420));
	printf("original : %d\n", 662);
	printf("reversed : %d\n", rev_int(662));
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

int reduce_int(int n)
{
 	int last = n % 10;
 	n = (n - last) / 10;
	return (n);
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

int rev_int(int n)
{
	int modulo; 
	int place = 0; 
	int rsum = 0; 

	while (n > 0)
	{
		modulo = n % 10;
		place++;

		if (modulo == 0)
		{
			rsum = rsum * 10;
		}
		else
		{
			rsum = rsum + (modulo * _exp(10, place));
		}

		n = reduce_int(n);
	}
	return (rsum);
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
