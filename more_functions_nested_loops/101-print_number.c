#include "main.h"

/**
 * print_number - printout number to terminal using _putchar
 * @n: the number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int zero = 0;
	int ten = 10;

	if (n < zero)
	{
		_putchar('-');
		n = -n;
	}
	if (n == zero)
	{
		_putchar('0');
		return;
	}
	if (n / ten)
	{
		print_number(n / ten);
	}
	_putchar(n % ten + '0');
}
