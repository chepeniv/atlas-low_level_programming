#include "main.h"

/**
 * print_diagonal - printout a diagonal line of a specified length
 * @length: the length of the diagonal
 *
 * Return: void
 */
void print_diagonal(int length)
{
	if (length > 0)
	{
		int segment = 1;

		while (segment <= length)
		{
			int space = 1;

			while (space < segment)
			{
				_putchar(' ');
				space++;
			}

			segment++;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
