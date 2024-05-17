#include <stdio.h>

/**
 * main - printout the lowercase alphabet in reverse
 *
 * Return: returns 0 upon successful execution
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; --i)
	{
		putchar(i);
	}

	putchar(10);

	return (0);
}
