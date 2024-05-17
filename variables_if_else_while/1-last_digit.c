#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - outputs the last digit of a randomly generated number
 *
 * Return: returns 0 upon successful execution
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	last_digit = n % 10; 

	if (last_digit >= 6)
	{
		printf("Last digit of %d is %d\n", n, last_digit);
	}
	else if (last_digit < 6)
	{
		if (last_digit == 0)
		{
			printf("Last digit of %d is %d\n", n, last_digit);
		}
		else
		{
			printf("Last digit of %d is %d\n", n, last_digit);
		}
	}

	return (0);
}
