#include <stdio.h>

/**
 * main - printout the alphabet in lowercase
 *
 * Return: returns 0 upon successful execution
 */
int main(void)
{
	int i;

	for (i=97; i <= 122; i++)
	{
		putchar(i);
	}

	putchar(10);

	return (0);
}
