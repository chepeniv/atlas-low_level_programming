#include <stdio.h>

/**
 * main - printout a square with sides of given length
 *
 * Return: 0 upon completion
 */
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0 )
			printf("%d", i);
		printf(" ");
	}
	return (0);
}
