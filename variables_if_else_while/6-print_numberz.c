#include <stdio.h>

/**
 * main - printout numbers 0-9 the hard way
 *
 * Return: returns 0 upon successful execution
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; ++i)
	{
		putchar(i);
	}

	putchar(10);

	return (0);
}
