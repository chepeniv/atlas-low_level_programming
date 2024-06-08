#include "main.h"
#include <stdio.h>

int test_multiples(int target, int factor, int multiple);
int test_factors(int target, int upperbound, int factor);

int _sqrt(int target, int guess)
{
	int square = guess * guess;

	if (square >= target)
		return (guess);
	else
		return (_sqrt(target, ++guess));
}

int is_prime_number(int target)
{
	int upperbound, factor;

	if (target <= 1 )
		return 0;
	else
	{
		upperbound = _sqrt(target, 2);
		factor = 2;
	}

	return test_factors(target, upperbound, factor);
}

int test_factors(int target, int upperbound, int factor)
{
	if (factor > upperbound)
		return 1;
	if (test_multiples(target, factor, factor * 2) == 0)
		return 0;
	return test_factors(target, upperbound, factor + 1);
}

int test_multiples(int target, int factor, int multiple)
{
	if (multiple > target)
		return -1;
	else if (multiple == target)
		return 0;
	else
		return test_multiples(target, factor, multiple + factor);
}

/**
 * _sqrt - calculate the natural square root of a number recursivly
 * @num: integer to calculate for
 *
 * Return: int result
 */

/**
 * init_array - set all values of given array to 1
 * @array: pointer to the array to operate on
 * @max: determines how far in the array to work on
 * @pos: the current working index 
 *
 * Return: void
 */

/**
 * find_multiples - traverse an array and set each multiple position of a
 * factor to 0
 * @array: the array to operate on
 * @factor: the factor to find multiples of
 * @multiple: the current multiple of factor
 * @stop: the limit in the array to carry the calculations upto
 *
 * Return: void
 */

/**
 * sift_primes - find all prime positions in given array
 * @sieve: integer to investigate
 * @target: integer to investigate
 * @upperbound: integer to investigate
 * @factor: integer to investigate
 *
 * Return: an int value of 1 for prime or 0 for not prime
 */

/**
 * is_prime_number - determine if the given number is a prime
 * @num: integer to investigate
 *
 * Return: an int value of 1 for prime or 0 for not prime
 */
