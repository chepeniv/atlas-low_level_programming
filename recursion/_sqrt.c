#include <stdio.h>
#include "main.h"

int _sqrt(int target);
int _sqrt_test(int test);

int main(void)
{
	_sqrt_test(9);
	_sqrt_test(-8);
	_sqrt_test(36);
	_sqrt_test(0);
	_sqrt_test(1);
	_sqrt_test(118);
	_sqrt_test(16);
	_sqrt_test(7);
	_sqrt_test(144);

	return (0);
}

int _sqrt(int target)
{
	int square = 0; 
	int guess = 0;
	
	if (target < 0 )
		return (-1);

	// if sqrt(--target) < target
	// 	
	// else if sqrt
	while (square <= target)
	{
		square = guess * guess;
		if (square == target)
			return (guess);
		guess ++;
	}
	
	return (-1);
}

int _sqrt_test(int test)
{
	int result = _sqrt(test);
	printf("for %d, sqrt returns %d\n", test, result);
}
