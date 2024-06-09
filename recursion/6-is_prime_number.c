#include "main.h"
#include <stdio.h>

int test_multiples(int target, int factor, int multiple);
int test_factors(int target, int upperbound, int factor);

/**
 * _sqrt - calculate the natural square root of a number recursively
 * @target: integer to investigate
 * @guess: candidate root
 *
 * Return: int result
 */
int _sqrt(int target, int guess)
{
	int square = guess * guess;

	if (square >= target)
		return (guess);
	else
		return (_sqrt(target, ++guess));
}

/**
 * is_prime_number - determine if the given number is a prime
 * @num: integer to investigate
 *
 * Return: an int value of 1 for prime or 0 for not prime
 */
int is_prime_number(int num)
{
	int upperbound, factor;

	if (num <= 1)
		return (0);

	upperbound = _sqrt(num, 2);
	factor = (2);
	return (test_factors(num, upperbound, factor));
}

/**
 * test_factors - determine if any factor upto upperbound divides target
 * @target: integer to investigate
 * @upperbound: a square greater than or equal to
 * @factor: integer to investigate
 *
 * Return: an int value of 1 for prime or 0 for not prime
 */
int test_factors(int target, int upperbound, int factor)
{
	if (factor > upperbound)
		return (1);
	if (test_multiples(target, factor, factor * 2) == 0)
		return (0);
	return (test_factors(target, upperbound, factor + 1));
}

/**
 * find_multiples - determines if the target is a multiple of the factor
 * @target: the number to test
 * @factor: the base factor to find multiples of
 * @multiple: the current multiple of the factor
 *
 * Return: int. -1 if factor doesn't divide target, and 0 if it does
 */
int test_multiples(int target, int factor, int multiple)
{
	if (multiple > target)
		return (-1);
	else if (multiple == target)
		return (0);
	else
		return (test_multiples(target, factor, multiple + factor));
}
