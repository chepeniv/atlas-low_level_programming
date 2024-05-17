#include <stdio.h>

/**
 * main - printout alphabet in lowercase and then in uppercase
 *
 * Return: returns 0 upon successful execution
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}

	putchar(10);

	return (0);
}
