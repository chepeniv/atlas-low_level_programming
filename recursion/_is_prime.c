#include "main.h"

int _calc_sqrt(int guess, int target);

int is_prime_number(int number)
{
	is prime number return 1;
	is not prime number return 0;
	sieve_of_eratos;
	build an array initialized to all 1 that is the size of number;
	calculate the upperbound of calculations using the sqrt of number;
	iteratively markout nonprimes in the array;
		stop and return if the array[number] position becomes 0;
		or the upper sqrt bound is reached;
			return the array[number] pos value;
}


/**
 * _sqrt - calculate the natural square root of a number recursivly
 * @num: integer to calculate for
 *
 * Return: int result
 */
int _sqrt(int num)
{
	int guess = 0;

	if (num < 0)
		return (-1);
	else
		return (_calc_sqrt(guess, num));
}

/**
 * rec_calc_sqrt - handles the sqrt caculation for its parent by using two
 * params
 * @guess: used to calculate a square
 * @target: the value to attemp to match with a square
 *
 * Return: int result
 */
int _calc_sqrt(int guess, int target)
{
	int square = guess * guess;

	if (square == target)
		return (guess);
	else if (square < target)
		return (_calc_sqrt(++guess, target));
	else
		return (-1);
}

