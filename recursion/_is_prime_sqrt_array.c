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
	int upperbound, factor, multiple;
	int primes[];

	if (target <= 1 )
		return 0;
	else
	{
		upperbound = _sqrt(target, 2);
		primes[upperbound + 1];
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
