#include "main.h"
#include <stdio.h>

/*void print_rev(int);*/
void print_fwrd(int);
int get_first(int);
int _exp(int, int);

/**
 * print_to_98 - count from any given number towards 98
 * @n: the number to count from
 *
 * Return: void
 */
void print_to_98(/*int n*/)
{
/*
	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			
		}
	}
	else if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
		}
	}
	else
	{
	}
*/
	int aa = 4857577;
	int bb = 383873;
	int cc = 23767;
	int dd = 1344;

	printf("testing for number %d\n", aa);
	print_fwrd(aa);
	_putchar(10);
	printf("testing for number %d\n", bb);
	print_fwrd(bb);
	_putchar(10);
	printf("testing for number %d\n", cc);
	print_fwrd(cc);
	_putchar(10);
	printf("testing for number %d\n", dd);
	print_fwrd(dd);
	_putchar(10);
}
/*
void print_rev(int m)
{
	while (m != 0) 
	{
		int l = m % 10;
		_putchar(l + '0');
		m = (m - l) / 10;
	}
}*/

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
/*
int get_first(int f)
{
	while (f >= 10)
	{
		f /= 10;
	}
	return (f);
}*/
