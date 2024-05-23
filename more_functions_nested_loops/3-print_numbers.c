#include "main.h"

/**
 * print_numbers - printout the digits in order followed by newline
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
