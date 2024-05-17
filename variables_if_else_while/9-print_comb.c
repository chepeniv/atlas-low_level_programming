#include <stdio.h>

/**
 * main - printout all possible combinations of single-digit numbers 
 *
 * Return: returns 0 upon successful execution
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; ++i)
	{
		putchar(i);

		if (i != 57) 
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);

	return (0);
}
