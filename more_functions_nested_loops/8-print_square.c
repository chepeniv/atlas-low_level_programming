#include "main.h"

/**
 * print_square - printout a square with sides of given length
 * @side: the length of the square's side
 *
 * Return: void
 */
void print_square(int side)
{
	if (side > 0)
	{
		int row = 1;
		int column = 1;

		while (row <= side)
		{
			while (column <= side)
			{
				_putchar('#');
				column++;
			}
			_putchar('\n');

			column = 1;
			row++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
