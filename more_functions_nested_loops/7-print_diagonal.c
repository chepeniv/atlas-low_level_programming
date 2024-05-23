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
		int space = 1;

		while (segment <= length)
		{
			while (space < segment)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar('\n');

			segment++;
			space = 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
