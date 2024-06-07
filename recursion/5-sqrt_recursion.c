#include "main.h"

/**
 * _sqrt_recursion - calculate the natural square root of a number recursivly
 * @num: integer to calculate for
 *
 * Return: int result
 */
int _sqrt_recursion(int num)
{
	int guess = 0;

	if (num < 0)
		return (-1);
	else
		return (rec_calc_sqrt(guess, num));
}

int rec_calc_sqrt(int guess, int target)
{
	int square = guess * guess;

	if (square == target)
		return (guess);
	else if (square < target)
		return (rec_calc_sqrt(++guess, target));
	else
		return (-1);
}

