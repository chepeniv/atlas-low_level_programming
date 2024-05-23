#include "main.h"

/**
 * print_most_numbers - printout all digits except for 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
			_putchar(i);

		i++;
	}
	_putchar('\n');
}
