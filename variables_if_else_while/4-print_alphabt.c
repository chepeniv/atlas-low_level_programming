#include <stdio.h>

/**
 * main - printout alphabet in lowercase without the letters q and e
 *
 * Return: returns 0 upon successful execution
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 'e' && i != 'q' )
		{
			putchar(i);
		}
	}

	putchar(10);

	return (0);
}
