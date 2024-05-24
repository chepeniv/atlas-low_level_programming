#include "main.h"

/**
 * print_number - printout number to terminal using _putchar
 * @n: the number to print
 *
 * Return: void
 */
void print_number(int n)
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
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
