#include "main.h"

/**
 * puts_half - print the second half of a given string
 * @c: pointer to string to be proccessed
 *
 * Return: void
 */
void puts_half(char *c)
{
	int length = 0;
	char *measure = c;

	while (*measure != '\0')
	{
		length++;
		measure++;
	}

	if (length % 2 == 1)
	{
		length = (length - 1) / 2;
		c = c + length + 1;
	}
	else
	{
		length = length / 2;
		c = c + length;
	}


	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}

	_putchar('\n');
}
