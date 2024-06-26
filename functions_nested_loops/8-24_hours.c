#include "main.h"

void print_num(int);

/**
 * jack_bauer - printout every minute from 00:00 to 23:59
 *
 * Return: int value of final digit
 */
void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr <= 23; ++hr)
	{
		for (min = 0; min <= 59; ++min)
		{
			print_num(hr);
			_putchar(58);
			print_num(min);
			_putchar(10);
		}
		min = 0;
	}
}

/**
 * print_num - prints out a two digit number with _putchar()
 *
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_num(int n)
{
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}
