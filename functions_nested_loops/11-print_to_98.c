#include "main.h"
#include <stdio.h>
/*
void into_string(char str[32], int n)
{
        int i = 30;
	char sign;

	if (n < 0 )
	{
		n = -n;

	}

        while (n !=0)
        {
		str[i--] = (n % 10) + '0';
		n /= 10;
        }
}

void print_string(char str[32])
{
	int i = 1;

	while (i <= 30)
	{
		if (str[i] != 'a')
		{
			_putchar(str[i]);
		}
		++i;
	}
}
*/
void print_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n / 10)
	{
		print_int(n / 10);
	}
	_putchar(n%10 + '0');
}

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
			print_int(i);
			_putchar(44);
			_putchar(32);
		}
	}
	else if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			print_int(i);
			_putchar(44);
			_putchar(32);
		}
	}
	print_int(98);
	_putchar(10);
}
