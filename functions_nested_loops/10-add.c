#include "main.h"
#include <stdio.h>

void pop_last(int);
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
	int bb = 3838734;
	int cc = 3884432;

	printf("testing for number %d\n", aa);
	print_rev(aa);
	_putchar(10);
	printf("testing for number %d\n", bb);
	print_rev(bb);
	_putchar(10);
	printf("testing for number %d\n", cc);
	print_rev(cc);
	_putchar(10);
}

void print_rev(int m)
{
	while (m != 0) 
	{
		int l = m % 10;
		_putchar(l + '0');
		m = (m - l) / 10;
	}
}
