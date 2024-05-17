#include <stdio.h>

/**
 * main - printout all the base 16 digits
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
	for (i = 97; i <= 97 + 5; ++i)
	{
		putchar(i);
	}

	putchar(10);

	return (0);
}
