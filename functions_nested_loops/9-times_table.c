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

	_putchar(cf);
	_putchar(cl);
}

/*
void format_entry(int b)
{
	if (b != 9 && c < 10) 
	{
		_putchar(44);
		_putchar(32);
	}
}
*/

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
			
			if (b != 9 && c < 9)
			{
				_putchar(c + '0');
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			else
			{
				print_num(c);
				_putchar(44);
				_putchar(32);
			}
			
		}

		_putchar(10);
		b = 0;
	}
}
