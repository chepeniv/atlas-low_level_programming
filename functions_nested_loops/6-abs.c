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
	else if (n < 0)
	{
		n = -n;
		return (n);
	}
}
