#include "main.h"

/**
 * print_line - printout a line of a specified length
 * @length: the length of the line
 *
 * Return: void
 */
void print_line(int length)
{
	if (length > 0)
	{
		int position = 1;

		while (position <= length)
		{
			_putchar('_');
			position++;
		}
	}
	_putchar('\n');
}
