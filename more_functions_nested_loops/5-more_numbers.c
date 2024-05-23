#include "main.h"

/**
 * print_int - handle the printout of a two-digit integer greater than or equal
 * to zero
 * @n: the number to printout
 *
 * Return: void
 */
void print_int(int n)
{
	if (n > 9)
		_putchar(n / 10 + '0');

	_putchar(n % 10 + '0');
}

/**
 * more_numbers - printout out integers 0 through 14 inclusive, ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int num = 0;
	int line = 1;

	while (line <= 10)
	{
		while (num <= 14)
		{
			print_int(num);
			num++;
		}
		_putchar('\n');

		num = 0;
		line++;
	}
}
