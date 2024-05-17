#include "main.h"

/**
 * print_sign - determines whether a given integer is positive,
 * negative, or zero
 * @n: the int to be evaluated
 *
 * Return: returns 1 for positive, -1 for negative, and 0 for zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
