#include "main.h"

int _sqrt(int guess, int target);
void init_array(int *array, int size, int pos);
void find_multiples(int *nums, int factor, int stop);
void det_primes(int *nums, int stop);

/**
 * is_prime_number - determine if the given number is a prime
 * @num: integer to investigate
 *
 * Return: an int value of 1 for prime or 0 for not prime
 */
int is_prime_number(int num)
{
	int upperbound, factor, multiple, i;
	int sieve[num + 1];

	if (num <= 1 )
		return 0;
	else
	{
		upperbound = _sqrt(2, num);
		factor = 2;
		init_array(sieve, num, 0);
	}

	while (factor <= upperbound)
	{
		if (sieve[factor] == 1 )
		{
			multiple = factor + factor;
			while (multiple <= num)
			{
				sieve[multiple] = 0;
				multiple += factor;
			}
			if (sieve[num] == 0)
				return 0;		
		}
		factor++;
	}

	return 1;
}

void find_multiples(int *nums, int factor, int stop)
{

}

/**
 * init_array - set all values of given array to 1
 * @array: pointer to the array to operate on
 * @max: determines how far in the array to work on
 * @pos: the current working index 
 *
 * Return: void
 */
void init_array(int *array, int max, int pos)
{
	if (pos > max)
		return;
	else
	{
		*(array + pos) = 1;
		init_array(array, max, pos++);
	}
}

/**
 * _sqrt - calculate the natural square root of a number recursivly
 * @num: integer to calculate for
 *
 * Return: int result
 */
int _sqrt(int guess, int target)
{
	int square = guess * guess;

	if (square >= target)
		return (guess);
	else
		return (_sqrt(++guess, target));
}
