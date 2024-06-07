#include "main.h"

int _sqrt(int num);
int _calc_sqrt(int guess, int target);

int is_prime_number(int num)
{
	int sieve[] = { [0 ... num + 1] = 1 };
	int upperbound = _sqrt[num];
	int factor = 2;
	int multiple = 0;

	while (factor <= upperbound)
		multiple = factor + factor;
		while (mutiple <= num + 1)
			sieve[multiple] = 0;
			multiple += factor;
		if (sieve[num + 1] == 0)
			return 0;		
		factor++;

	return sieve[num + 1];
}

int _sqrt(int num)
{
	int guess = 0;

	if (num < 0)
		return (-1);
	else
		return (_calc_sqrt(guess, num));
}

int _calc_sqrt(int guess, int target)
{
	int square = guess * guess;

	if (square >= target)
		return (guess);
	else
		return (_calc_sqrt(++guess, target));
}

