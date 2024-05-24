#include "main.h"

/**
 * _puts - printout a string to stdout 
 * @c: pointer to the start of a string
 *
 * Return: void
 */
void _puts(char *c)
{
	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}
