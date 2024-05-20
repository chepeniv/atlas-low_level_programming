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

	int l = n % 10; // get last first then do absolute
	int a = _abs(l);
	char c = a + '0';
	_putchar(c);
	return (l);
}
