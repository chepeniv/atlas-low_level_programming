#include "main.h"

/**
 * puts2 - printout every second character of a string provided
 * @c: pointer to string to be processed
 *
 * Return: void
 */
void puts2(char *c)
{
	while (*c != '\0')
	{
		_putchar(*c);
		c += 2;
	}
	_putchar('\n');
}
