#include <stdio.h>

/**
 * main - printout numbers 0-9
 *
 * Return: returns 0 upon successful execution
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		printf("%d", i);
	}

	putchar(10);

	return (0);
}
