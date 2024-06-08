#include "main.h"
#include <stdio.h>
#include <limits.h>

int _sqrt(int guess, int target);
int is_prime(int num);
void test_func(int num);

int main(void)
{
	test_func(7);
	return (0);
}

void test_func(int num)
{
	int p = is_prime(num);
	char *result;

	if (p == 1)
		result = "PRIME";
	else
		result = "NOT prime";

	printf("the given integer %d is %s\n", num, result);
}

int _sqrt(int guess, int target)
{
	int square = guess * guess;

	if (square >= target)
		return (guess);
	else
		return (_sqrt(++guess, target));
}

int is_prime(int num)
{
	int upperbound, factor, multiple, i;
	int sieve[num + 1];

	if (num <= 2 )
		return 0;
	else
	{
		upperbound = _sqrt(2, num);
		factor = 2;
		for (i = 0; i <= num; i++)
			sieve[i] = 1;
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
