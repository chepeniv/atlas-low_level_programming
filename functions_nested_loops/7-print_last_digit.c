#include "main.h"

/**
 * print_last_digit - evaluates what the final digit of a given integer is
 * @n: the int to be evaluated
 *
 * Return: int value of final digit
 */
int print_last_digit(int n)
{
	int l = n % 10;
	char c = l + '0';
	_putchar(c);
	return (n);
}
