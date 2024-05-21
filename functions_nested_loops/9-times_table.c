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
	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}
	print_num(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * times_table - printout 9's times table starting from 0
 *
 * Return: void
 */
void times_table(void)
{
	int row;
	int column;
	int product;

	for (row = 0; row <= 9; ++row)
	{
		for (column = 0; column <= 9; ++column)
		{
			product = row * column;

			if (column == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			else if (column < 9)
			{
				if (product < 10 ) _putchar(' ');
				print_num(product);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (product < 10 ) _putchar(' ');
				print_num(product);
				_putchar('\n');
			}
		}
		column = 0;
	}
}
