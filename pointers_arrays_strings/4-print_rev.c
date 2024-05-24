#include "main.h"

/**
 * print_rev - print to stdout a given string in reverse
 * @c: pointer to the start of a string
 *
 * Return: void
 */
void print_rev(char *c)
{
	int length = 0;

	while (*c != '\0')
	{
		length++;
		c++;
	}

	while (length >= 0)
	{
		_putchar(*c);
		length--;
		c--;
	}
	_putchar('\n');
}
