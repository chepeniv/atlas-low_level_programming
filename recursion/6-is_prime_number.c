#include "main.h"
#include <stdio.h>

int _sqrt(int target, int guess)
{
	int square = guess * guess;
	if (square >= target)
		return (guess);
	else
		return (_sqrt(target, ++guess));
}

void init_array(int array[], int target, int pos)
{
	if (pos > target)
	{
		return;
	}
	else
	{
		array[pos] = 1;
		init_array(array, target, ++pos);
	}
}

void find_multiples(int sieve[], int target, int factor, int multiple)
{
	if (multiple > target)
		return;
	else
	{
		sieve[multiple] = 0;
		multiple += factor;
		find_multiples(sieve, target, factor, multiple);
	}
}

int sift_primes(int sieve[], int target, int upperbound, int factor)
{
	if (factor > upperbound)
		return sieve[target];
	else if (sieve[factor] == 1)
	{
		find_multiples(sieve, target, factor, factor * 2);
		if (sieve[target] == 0)
			return 0;		
	}
	else
		return (sift_primes(sieve, target, upperbound, ++factor));
}

int is_prime_number(int target)
{
	int upperbound, factor, multiple;
	int sieve[target + 1];
	if (target <= 1 )
		return 0;
	else
	{
		upperbound = _sqrt(target, 2);
		factor = 2;
		init_array(sieve, target, 0);
		return sift_primes(sieve, target, upperbound, factor);
	}
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
