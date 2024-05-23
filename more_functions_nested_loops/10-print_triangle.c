#include "main.h"

/**
 * print_triangle - printout a right-oriented right trangle with sides of a given length
 * @side: the length of the triangle's side
 *
 * Return: void
 */
void print_triangle(int side)
{
	if (side > 0)
	{
		int row = 1;
		int column = 1;

		while (row <= side)
		{
			while (column <= side)
			{
				if (column <= side - row)
				{
					_putchar(' ');
				}
				else 
				{
					_putchar('#');
				}
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
