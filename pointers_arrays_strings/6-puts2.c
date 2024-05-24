#include "main.h"

/**
 * puts2 - printout a string to stdout 
 * @c: pointer to the start of a string
 *
 * Return: void
 */
void puts2(char *c)
{
	while (*c != '\0')
	{
		_putchar(*c);
		c++;
		c++;
	}
	_putchar('\n');
}
