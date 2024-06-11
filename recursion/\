#include "main.h"
#include <stdio.h>

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
	if (target % factor == 0)
		return (0);
	return (test_factors(target, upperbound, factor + 2));
}

/**
 * is_prime_number - determine if the given number is a prime
 * @num: integer to investigate
 *
 * Return: an int value of 1 for prime or 0 for not prime
 */
int is_prime_number(int num)
{
	int upperbound;

	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num != 2)
		return (0);

	upperbound = _sqrt(num, 2);
	return (test_factors(num, upperbound, 3));
}
