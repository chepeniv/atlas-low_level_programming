#include "main.h"

/**
 * _abs - calculates the absolute value of a given int
 * @n: the int to be evaluated
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = -n;
		return (n);
	}
}

/**
 * print_last_digit - evaluates what the final digit of a given integer is
 * @n: the int to be evaluated
 *
 * Return: int value of final digit
 */
int print_last_digit(int n)
{
	int a = _abs(n);
	int l = a % 10;
	char c = l + '0';
	_putchar(c);
	return (l);
}
