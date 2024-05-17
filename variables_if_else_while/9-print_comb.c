#include <stdio.h>

/**
 * main - printout all possible combinations of single-digit numbers
 *
 * Description: why in the world was the description for this task so
 * weirdly worded ???
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
