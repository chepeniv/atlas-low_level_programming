#include "main.h"

/**
 * _pow_recursion - calculate the product of `base` multiplied by itself
 * `power` number of times
 * @base: integer to multiply
 * @power: number of multiplications
 *
 * Return: int result
 */
int _pow_recursion(int base, int power)
{
	if (power < 0)
		return (-1);
	else if (power == 0)
		return (1);
	else
		return (base * _pow_recursion(base, power - 1));
}
