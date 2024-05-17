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
	printf("Last digit of %d is %d\n", n, last_digit);


/*
	if ()
	{
	}
	else if ()
	{
	}
	else
	{
	}
*/

	return (0);
}
