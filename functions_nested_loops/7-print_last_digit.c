#include "main.h"

/**
 * print_last_digit - evaluates what the final digit of a given integer is
 * @n: the int to be evaluated
 *
 * Return: int value of final digit
 */
int print_last_digit(int n)
{
	unsigned int u = (unsigned int) n;
	int l = (u % 10) + 48;
	char c = (char) l;
	_putchar(c);
	return (n);
}
