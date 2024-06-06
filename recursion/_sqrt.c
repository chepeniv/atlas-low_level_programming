#include <stdio.h>
#include "main.h"

int _sqrt(int target);

int main(void)
{
	int result, target;

	target = 9;
	result = _sqrt(target);
	printf("for %d, sqrt returns %d\n", target, result);

	target = -2;
	result = _sqrt(target);
	printf("for %d, sqrt returns %d\n", target, result);

	target = 44;
	result = _sqrt(target);
	printf("for %d, sqrt returns %d\n", target, result);

	target = 100;
	result = _sqrt(target);
	printf("for %d, sqrt returns %d\n", target, result);

	target = 36;
	result = _sqrt(target);
	printf("for %d, sqrt returns %d\n", target, result);

	target = 0;
	result = _sqrt(target);
	printf("for %d, sqrt returns %d\n", target, result);

	target = 1;
	result = _sqrt(target);
	printf("for %d, sqrt returns %d\n", target, result);

	target = 81;
	result = _sqrt(target);
	printf("for %d, sqrt returns %d\n", target, result);

	target = 223;
	result = _sqrt(target);
	printf("for %d, sqrt returns %d\n", target, result);

	target = 16;
	result = _sqrt(target);
	printf("for %d, sqrt returns %d\n", target, result);

	target = 144;
	result = _sqrt(target);
	printf("for %d, sqrt returns %d\n", target, result);

	target = 121;
	result = _sqrt(target);
	printf("for %d, sqrt returns %d\n", target, result);

	return (0);
}

int _sqrt(int target)
{
	int square = 0; 
	int guess = 0;
	
	if (target < 0 )
		return (-1);

	while (square <= target)
	{
		square = guess * guess;
		if (square == target)
			return (guess);
		guess ++;
	}
	
	return (-1);
}
