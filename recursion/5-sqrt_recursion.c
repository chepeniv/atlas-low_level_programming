#include "main.h"

/**
 * _sqrt_recursion - calculate the natural square root of a number recursivly
 * @num: integer to calculate for
 *
 * Return: int result
 */
int _sqrt_recursion(int num)
{
	if (num < 4)
		return (-1);
	return (base * _pow_recursion(base, power - 1));
}
