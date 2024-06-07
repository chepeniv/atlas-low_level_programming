#include <stdio.h>
#include "main.h"

//int _sqrt(int target);
int _sqrt_test(int test);
int rec_sqrt(int target);
int rec_calc(int guess, int target);

int main(void)
{
	_sqrt_test(-8);
	_sqrt_test(7);
	_sqrt_test(32);
	_sqrt_test(0);
	_sqrt_test(1);
	_sqrt_test(4);
	_sqrt_test(9);
	_sqrt_test(16);
	_sqrt_test(25);
	_sqrt_test(36);
	_sqrt_test(144);
	return (0);
}

int _sqrt_test(int test)
{
	//int result = _sqrt(test);
	int result = rec_sqrt(test);
	printf("for %d, sqrt returns %d\n", test, result);
}

int rec_sqrt(int target)
{
	int guess = 0;

	if (target < 0)
		return -1;
	//else if (target == 0)
	//	return 0;
	else
		return(rec_calc(guess, target));
}

int rec_calc(int guess, int target)
{
	int square = guess * guess;
	if (square == target) 
		return guess;
	else if (square < target)
		return rec_calc(++guess, target);
	else if (square > target)
		return -1;
	return -1;
}

/*
int _sqrt(int target)
{
	int square = 0; 
	int guess = -1;
	
	if (target < 0 )
		return (-1);
	// if sqrt(--target) < target
	// 	
	// else if sqrt
	while (square <= target)
	{
		guess ++;
		square = guess * guess;
		if (square == target)
			return (guess);
	}
	return (-1);
}
*/
