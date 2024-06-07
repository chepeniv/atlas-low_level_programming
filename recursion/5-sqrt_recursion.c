#include "main.h"

int rec_calc_sqrt(int guess, int target);

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

/**
 * rec_calc_sqrt - handles the sqrt caculation for its parent by using two
 * params
 * @guess: used to calculate a square
 * @target: the value to attemp to match with a square
 *
 * Return: int result
 */
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

