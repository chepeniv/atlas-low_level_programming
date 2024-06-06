#include "main.h"

/**
 * factorial - calculates the factorial product of a given integer
 * @number: integer to calculate factorial for
 *
 * Return: int result
 */
int factorial(int number)
{
	if (number < 0)
		return (-1);
	else if (number <= 1)
		return (1);
	else
		return (number * factorial(number--));
}
