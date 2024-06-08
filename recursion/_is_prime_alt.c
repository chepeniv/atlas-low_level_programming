#include "main.h"
#include <stdio.h>
#include <limits.h>

int _sqrt(int guess, int target);
int is_prime(int num);
void test_func(int num);

int main(void)
{
	int i;
	for (i = 0; i < 50; i++)
		test_func(i);
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

	printf("%d is %s\n", num, result);
}

int _sqrt(int target, int guess)
{
	int square = guess * guess;

	if (square >= target)
		return (guess);
	else
		return (_sqrt(target, ++guess));
}

int is_prime(int num)
{
	int upperbound, factor, multiple;

	if (num <= 1 )
		return 0;
	else
	{
		upperbound = _sqrt(num, 2);
		factor = 2;
	}

	while (factor <= upperbound)
	{
		multiple = factor * 2 ;
		while (multiple <= num)
		{
			if (num == multiple)
				return 0;
			multiple += factor;
		}
		factor++;
	}
	return 1;
}
