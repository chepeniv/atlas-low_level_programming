#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determines whether a random number generated is positive or negative
 *
 * Return: returns 0 upon successful execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("0 is zero\n");
	}

	return (0);
}
