#include "main.h"

/**
 * print_num - prints out a two digit number with _putchar()
 *
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_num(int n)
{
	int f = n / 10;
	int l = n % 10;
	char cf = f + '0';
	char cl = l + '0';

	if (n > 9)
	{
		_putchar(cf);
		_putchar(cl);
	}
	else
	{
		_putchar(32);
		_putchar(n + '0');
	}
}

/**
 * times_table - printout 9's times table starting from 0
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; ++a)
	{
		for (b = 0; b <= 9; ++b)
		{
			c = a * b;

			if (b == 0)
			{
				_putchar(c + '0');
				_putchar(44);
				_putchar(32);
			}
			else if (c < 10 && b < 9)
			{
				print_num(c);
				_putchar(44);
				_putchar(32);
			}
			else if (b != 9)
			{
				print_num(c);
				_putchar(44);
				_putchar(32);
			}
			else
			{
				print_num(c);
			}
		}

		_putchar(10);
		b = 0;
	}
}
