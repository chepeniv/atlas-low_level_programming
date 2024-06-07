#include "main.h"

/*int rec_calc_sqrt(int guess, int target);*/

int _sqrt_recursion(int guess, int target);

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
		return (_sqrt_recursion(guess, num));
}

/**
 * _sqrt_recursion- handles the sqrt caculation for its parent by using two
 * params
 * @guess: used to calculate a square
 * @target: the value to attemp to match with a square
 *
 * Return: int result
 */
int _sqrt_recursion(int guess, int target)
{
	int square = guess * guess;

	if (square == target)
		return (guess);
	else if (square < target)
		return (_sqrt_recursion(++guess, target));
	else
		return (-1);
}

